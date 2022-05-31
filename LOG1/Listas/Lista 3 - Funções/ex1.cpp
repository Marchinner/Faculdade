#include <iostream>
#include <locale.h>

using namespace std;

float ConverteCelsius(float fah) {
    float celsius;
    
    celsius = ( ( ( fah - 32) * 5 ) / 9 );

    return celsius;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float fah;

    cout << "Insira um valor de temperatura em Fahrenheit: ";
    cin >> fah;

    cout << fah << "°F = " << ConverteCelsius(fah) << "°C" << endl;

    return 0;
}
