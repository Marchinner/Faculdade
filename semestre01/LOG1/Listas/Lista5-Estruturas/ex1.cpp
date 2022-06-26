#include <iostream>
#include <locale.h>

using namespace std;

struct Inscricao{
    int inscricao;
    string nome;
    float altura;
    float peso;
    string naturalidade;
    string estado;
};

void cadastrar(Inscricao candidato[30]) {
    int contador;

    for(contador = 0; contador < 30; contador++) {
        candidato[contador].inscricao = contador;

        cout << "===== CANDIDATO N° " << contador + 1 << " =====" << endl << endl;

        cout << "Nome: ";
        cin >> candidato[contador].nome;

        cout << "Altura: ";
        cin >> candidato[contador].altura;

        cout << "Peso: ";
        cin >> candidato[contador].peso;

        cout << "Naturalidade: ";
        cin >> candidato[contador].naturalidade;

        cout << "Estado: ";
        cin >> candidato[contador].estado;

        cout << "===================" << endl;
    }
}

void imprimirCandidatos(Inscricao candidato[30]) {
    int contador;

    for(contador = 0; contador < 30; contador++) {
        if(candidato[contador].altura > 1.85 && candidato[contador].estado == "SP") {
            cout << "Candidatos que são de SP e tem altura maior que 1.85: " << endl;
            cout << candidato[contador].nome << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Inscricao candidato[30];
    
    cadastrar(candidato);

    imprimirCandidatos(candidato);

    return 0;
}
