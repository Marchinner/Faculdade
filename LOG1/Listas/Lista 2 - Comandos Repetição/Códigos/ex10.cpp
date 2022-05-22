#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int i, n, divisor, soma=0;

    cout << "Insira um número para verificar se ele é perfeito: ";
    cin >> n;

    for (i = 1; i < n ; i++)
    {
        if (n % i == 0)
        {
            divisor = i;
            soma += divisor;
        }
    }
    if (soma == n)
    {
        cout << "O número " << n << " é um número perfeito" << endl;
    }
    else{
        cout << "O número " << n << " não é um número perfeito" << endl;
    }

    return 0;
}
