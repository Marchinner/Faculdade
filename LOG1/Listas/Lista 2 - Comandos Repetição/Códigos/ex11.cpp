#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    long int a,b,c;
    int n,cont;

    cout << "Digite quantos termos você quer: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Número inválido!" << endl;
    }
    else
    {
        a = 1;
        b = 1;
        cont = 2;
        cout << "1 1 ";

        while(cont < n) {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
            cont = cont + 1;
        }
        cout << endl;
    }

    return 0;
}
