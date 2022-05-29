#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

float converterTemp (float fah)
{
    float celsius = ( ( (fah - 32) * 5) / 9);

    return celsius;
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float fah, celsius;

    cout << "Insira uma temperatura em Fahrenheit para ser convertida para Celsius: ";
    cin >> fah;

    cout << "O valor da temperatuda convertida para Celsius é igual à: " << endl << setprecision(4) << converterTemp(fah) << "°F" << endl;

    return 0;
}
