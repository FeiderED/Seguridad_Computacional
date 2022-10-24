#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    string alfabeto = "abcdefghijklmnñopqrstuvwxyz";
    string mensaje;
    int desplazamiento;
    cout << "Ingrese el mensaje a cifrar: ";
    getline(cin, mensaje);
    cout << "Ingrese el desplazamiento: ";
    cin >> desplazamiento;
    for (int i = 0; i < mensaje.length(); i++)
    {
        if (mensaje[i] != ' ')
        {
            mensaje[i] = alfabeto[(alfabeto.find(mensaje[i]) + desplazamiento) % 27];
        }
    }
    

    
    //Guardando el mensaje cifrado en un archivo
    ofstream archivo;
    archivo.open("results/cesar_encryption.txt");
    archivo << mensaje << endl;
    archivo.close();

    return 0;
}
