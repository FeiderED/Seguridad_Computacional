//deciphering the cesar algorithm
#include <iostream>

using namespace std;

int main (){
    //deciphering the cesar algorithm
    char text[100];
    int key;
    cout << "Enter the text to decipher: ";
    cin >> text;
    cout << "Enter the key: ";
    cin >> key;
    for (int i = 0; (i < 100 && text[i] != '\0'); i++){
        text[i] = text[i] - key;
    }
    cout << "Deciphered text: " << text << endl;
    return 0;
}
    