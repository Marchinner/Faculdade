#include <iostream>
#include <locale.h>

using namespace std;

int ConverterDias(int anos, int meses, int dias) {
    dias += ((anos * 360) + (meses * 30));

    return dias;
}

int main() {
    int anos, meses, dias;

    cout << "Insira quantos anos você tem de vida: ";
    cin >> anos;

    cout << "Insira quantos meses de vida você tem: ";
    cin >> meses;

    cout << "Insira quantos dias de vida você tem: ";
    cin >> dias;

    cout << "Você tem " << ConverterDias(anos, meses, dias) << " dias de vida." << endl;

    return 0;
}
