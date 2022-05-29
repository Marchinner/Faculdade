#include <iostream>
#include <locale.h>

using namespace std;

int verificar(int numero) {
    if(numero >= 0 && numero <= 10) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Insira um número: ";
    cin >> numero;

    cout << "O programa retornou valor: " << verificar(numero) << endl;

    return 0;
}
