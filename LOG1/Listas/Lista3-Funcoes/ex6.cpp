#include <iostream>
#include <locale.h>
#include <ostream>

using namespace std;

float Area(float lado) {
    float area = lado * lado;
    
    return area;
}

float Perimetro(float lado) {
    float perimetro = lado * 4;

    return perimetro;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float lado;

    cout << "Insira o valor do lado do quadrado: ";
    cin >> lado;

    cout << "A área deste quadrado de lado " << lado << " é igual à " << Area(lado) << "m²" << endl <<
        "E o perímetro é igual à " << Perimetro(lado) << "m" << endl;

    return 0;
}
