#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int divisor, soma=0, dividendo=1;

    for (divisor = 1; divisor <= 50; divisor++)
    {
        soma += dividendo / divisor;
        dividendo += 2;
    }
    cout << soma << endl;

    return 0;
}
