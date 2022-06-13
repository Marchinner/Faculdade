#include <iostream>
#include <locale.h>

using namespace std;

float Metade(float num) {
    float metade = num / 2;

    return metade;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num;
    int numero;

    for(numero = 1; numero <= 2; numero++) {
        cout << "Insira o " << numero << "º número: ";
        cin >> num;
        
        cout << "A metade do " << numero << "º número inserido é = " << Metade(num) << endl;
    }

    return 0;
}
