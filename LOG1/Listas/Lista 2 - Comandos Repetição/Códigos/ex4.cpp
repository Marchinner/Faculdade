#include <iostream>
#include <locale.h>

using namespace std;

int numero, i=2, nDivisores=0, continuar;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Insira um número para verificar se é PRIMO: ";
    cin >> numero;

    do
    {
        if (numero % i == 0)
        {
            nDivisores++;
            i++;

            if (nDivisores > 1)
            {
                continuar = 0;
                cout << "Este número não é PRIMO!" << endl;
            }
            else
            {
                continuar = 1;
                /* cout << "Este número é PRIMO!" << endl; */
            }
        }
        else
        {
            i++;
            continuar = 1;
        }
        
    }
    while (continuar == 1);
    
    
    return 0;
}