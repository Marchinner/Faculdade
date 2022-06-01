#include <iostream>
#include <locale.h>

using namespace std;

int numero, divisor, divisores, numerosPrimos=0, i=0;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (i = 1; i <= 10; i++)
    {
        divisores = 0;

        cout << i << "- Insira um número: ";
        cin >> numero;

        for (divisor = 1; divisor <= numero; divisor++)
        {
            if (numero % divisor == 0)
            {
                divisores++;
            }
        }
        if (divisores == 1 || divisores == 2)
        {
            numerosPrimos++;
        }
    }
    cout << "Nesta sequência existem " << numerosPrimos << " números primos." << endl;

    return 0;
}
