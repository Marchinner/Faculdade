#include <iostream>
#include <locale.h>

using namespace std;

int numero, divisor, divisores=0;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Insira um número: ";
    cin >> numero;

    for (divisor=1 ; divisor <= numero ; divisor++)
    {
        if (numero % divisor == 0)
        {
            divisores++;
        }
    }

    if (divisores == 2 || divisores == 1)
    {
        cout << "Este número É PRIMO!!" << endl;
    }
    else
    {
        cout << "Este número NÃO É PRIMO!!" << endl;
    }

    return 0;
}
