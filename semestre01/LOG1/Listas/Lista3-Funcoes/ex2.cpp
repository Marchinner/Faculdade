#include <iostream>
#include <locale.h>

using namespace std;

int Verificar(int num) {
    int retorno;

    if(num >= 0 && num <= 10) {
        retorno = 0;
    } else {
        retorno = 1;
    }

    return retorno;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Insira um número: ";
    cin >> num;

    cout << "O programa retornou " << Verificar(num) << endl;

}
