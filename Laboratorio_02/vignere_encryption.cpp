//cifrador de vigenere con alfabeto módulo 27 o módulo 191 (ASCII)

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <locale>

using namespace std;

void encrypt_vigenere_mod27(string mensaje, string clave, string alfabeto){
    string mensaje_cifrado;
    for (int i = 0, j = 0; i < mensaje.length(); i++)
    {
        if (mensaje[i] != ' ')
        {
            mensaje_cifrado += alfabeto[(alfabeto.find(mensaje[i]) + alfabeto.find(clave[j])) % 27];
            j = (j + 1) % clave.length();
        }
        else
        {
            mensaje_cifrado += ' ';
        }
    }
    cout << "Mensaje cifrado: " << mensaje_cifrado << endl;
    //Guardando el mensaje cifrado en un archivo
    ofstream archivo;
    archivo.open("results/vigenere_encryption_mod27.txt");
    archivo << mensaje_cifrado << endl;
    archivo.close();
}


void encrypt_vigenere_mod191(string mensaje, string clave, string alfabeto){
    string mensaje_cifrado;
    for (int i = 0, j = 0; i < mensaje.length(); i++)
    {
        if (mensaje[i] != ' ')
        {
            mensaje_cifrado += alfabeto[(alfabeto.find(mensaje[i]) + alfabeto.find(clave[j])) % 191];
            j = (j + 1) % clave.length();
        }
        else
        {
            mensaje_cifrado += ' ';
        }
    }
    cout << "Mensaje cifrado: " << mensaje_cifrado << endl;
    //Guardando el mensaje cifrado en un archivo
    ofstream archivo;
    archivo.open("results/vigenere_encryption_mod191.txt");
    archivo << mensaje_cifrado << endl;
    archivo.close();
}


int main (){
    setlocale(LC_ALL, "spanish");
    string alfabeto = "abcdefghijklmnñopqrstuvwxyz";
    string alfabeto_ascii = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    string mensaje;
    string clave;
    cout << "Ingrese el mensaje a cifrar: ";
    getline(cin, mensaje);
    cout << "Ingrese la clave: ";
    getline(cin, clave);
    encrypt_vigenere_mod27(mensaje, clave, alfabeto);
    encrypt_vigenere_mod191(mensaje, clave, alfabeto_ascii);
    return 0;
}