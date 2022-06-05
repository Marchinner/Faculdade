#include <iostream>
#include <locale.h>

using namespace std;

string Categoria(int idade) {
    string categoria;

    if(idade <= 7) {
        if(idade >= 5) {
            categoria = "Infaltil A";
        } else {
            categoria = "Esta pessoa é muito nova e não pode participar!";
        }
    } else if(idade >= 8 && idade <= 10) {
        categoria = "Infantil B";
    } else if(idade >=11 && idade <= 13) {
        categoria = "Juvenil A";
    } else if(idade >= 14 && idade <= 17) {
        categoria = "Juvenil B";
    } else {
        categoria = "Adulto";
    }
    return categoria;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    cout << "Insira a idade: ";
    cin >> idade;

    cout << "A categoria desta pessoa é " << Categoria(idade) << endl;

    return 0;
}
