#include <iostream>
#include <locale.h>

using namespace std;

#define MAXIMO 100

struct Colmeias {
    int codigo;
    string regiao;
    string estado;
    int qualificacao;
    int abelhas;
};

void cadastrar(Colmeias colmeia[MAXIMO]) {
    int contador;

    for(contador = 0; contador < MAXIMO; contador++) {
        cout << "===== CADASTRO DA COLMEIA " << contador + 1 << " =====" << endl;

        cout << "Código: ";
        cin >> colmeia[contador].codigo;

        cout << "Região: ";
        cin >> colmeia[contador].regiao;

        cout << "Estado: ";
        cin >> colmeia[contador].estado;

        cout << "Qualificação (1 - FORTE; 2 - MÉDIA; 3 - FRACA): ";
        cin >> colmeia[contador].qualificacao;

        cout << "N° Abelhas: ";
        cin >> colmeia[contador].abelhas;
    } 
}

void qualificar(Colmeias colmeia[MAXIMO]) {
    int contador, qualificacao;

    cout << "Qual qualificação mostrar? (1 - FORTE; 2 - MÉDIA; 3 - FRACA) R: ";
    cin >> qualificacao;

    for(contador = 0; contador < MAXIMO; contador++) {
        if(qualificacao == colmeia[contador].qualificacao) {
            cout << "===== DADOS DA COLMEIA " << contador << " =====" << endl;

            cout << "Código: " << colmeia[contador].codigo << endl;

            cout << "Região: " << colmeia[contador].regiao << endl;

            cout << "Estado: " << colmeia[contador].estado << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Colmeias colmeia[MAXIMO];

    cadastrar(colmeia);

    qualificar(colmeia);

    return 0;
}
