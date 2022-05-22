#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, continuar=1, total=0, produto=0;

    do
    {
        cout << "Insira um número: ";
        cin >> numero1;

        if (numero1 == 0)
        {
            continuar = 0;
        }
        else
        {
            cout << "Insira um número: ";
            cin >> numero2;

            if (numero2 == 0)
            {
                continuar = 0;
            }
            else
            {
                produto = numero1 * numero2;
                cout << "produto " << produto << endl;
                total += produto;
                cout << "total " << total << endl;
            }
        }
    }
    while (continuar == 1);

    cout << "O produto dos números digitados é = " << total << endl;

    return 0;
}
