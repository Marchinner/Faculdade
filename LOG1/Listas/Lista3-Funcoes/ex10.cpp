#include <iostream>
#include <locale.h>

using namespace std;

float Dobro(float num) {
    float dobro = num * 2;

    return dobro;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num;
    int numero;

    for(numero = 1; numero <= 3; numero++) {
        cout << "Insira o " << numero << "º número: ";
        cin >> num;
        
        cout << "O dobro do " << numero << "º número inserido é = " << Dobro(num) << endl;
    }

    return 0;
}
