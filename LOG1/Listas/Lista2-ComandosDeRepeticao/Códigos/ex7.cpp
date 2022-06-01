#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float valor, coluna, quantidade, num=1;

    cout << "Insira o valor do Xerox em reais: ";
    cin >> valor;

    for (coluna = 0; coluna < 20; coluna++)
    {
        for (quantidade = 1; quantidade <= 10; quantidade++)
        {
            cout << num << " = " << valor * num << " R$ | ";
            num++;
        }
        cout << endl;
    }


    return 0;
}
