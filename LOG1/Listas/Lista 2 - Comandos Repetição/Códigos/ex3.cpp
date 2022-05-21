#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, maiorNumero = 0, menorNumero = 0, continuar = 1, i = 0;

    do
    {
        cout << "Insira um número positivo e para parar a comparação, insira zero: ";
        cin >> numero;

        if (numero > 0)
        {
            if (i == 0)
            {
                maiorNumero = numero;
                menorNumero = numero;
                i++;
            }
            else
            {
                if (numero >= maiorNumero)
                {
                    maiorNumero = numero;
                    i++;
                }
                else if (numero <= menorNumero)
                {
                    menorNumero = numero;
                    i++;
                }
            }
        }
        else
        {
            if (numero < 0)
            {
                cout << "O número não pode ser NEGATIVO!" << endl;
            }
            else
            {
                continuar = 0;
            }
        }
    }
    while (continuar == 1);

    cout << "Maior valor: " << maiorNumero << endl;
    cout << "Menor valor: " << menorNumero << endl;

    return 0;
}