#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, divisor=1, divisores=0, continuar=1;

    cout << "Insira um número: ";
    cin >> numero;

    do
    {
        if (numero % divisor == 0)
        {
            if (divisores > 2)
            {
                cout << "Este número não é primo!" << endl;
                continuar = 0;
            }
            else
            {
                cout << divisor << " é divisor de " << numero << endl;
                divisor++;
                divisores++;
            }
        }
        else
        {
            divisor++;
        }

        if (divisores == 2)
        {
            continuar = 0;
            cout << numero << " é primo!" << endl;
        }
    }
    while (continuar == 1);
    
    return 0;
}
