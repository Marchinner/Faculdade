#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int divisor, divisores, numero;

    cout << "Insira um número: ";
    cin >> numero;

    for (divisor = 1; divisor <= numero; divisor++)
    {
        if (numero % divisor)
        {
            divisores++;
        }
        if (divisores == 2)
        {
            cout << "É primo!" << endl;
        }
        else
        {
            cout << "Não é primo!" << endl;
        }
    }

    return 0;
}