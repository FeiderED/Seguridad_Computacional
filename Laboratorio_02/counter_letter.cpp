//Un contador de cada letra alfabética
#include <iostream>
using namespace std;


void counter_letters (char *str, int *count)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count[str[i] - 'A']++;
        }
        i++;
    }
}

int main(){
    char str[100];
    int count[26] = {0};
    cout << "Ingrese una cadena: ";
    cin.getline(str, 100);
    counter_letters(str, count);
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << "La letra " << char(i + 'a') << " aparece " << count[i] << " veces" << endl;
        }
    }
    return 0;
}



