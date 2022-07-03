#include <iostream>
#include <locale.h>

using namespace std;

struct Matricula {
    string nome;
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float notaFinal;
    int situacao;
};

void cadastrar(Matricula aluno[10]) {
    int contador;

    cout << "===== CADASTRO DE ALUNOS =====" << endl;

    for(contador = 0; contador < 10; contador++) {
        cout << "- Aluno " << contador + 1 << endl;
        
        cout << "Nome: ";
        cin >> aluno[contador].nome;

        cout << "Matrícula: ";
        cin >> aluno[contador].matricula;

        cout << "Nota 1: ";
        cin >> aluno[contador].nota1;

        cout << "Nota 2: ";
        cin >> aluno[contador].nota2;

        cout << "Nota 3: ";
        cin >> aluno[contador].nota3;

        cout << "Nota 4: ";
        cin >> aluno[contador].nota4;
    }
}

void calculaNotaFinal(Matricula aluno[10]) {
    int contador;

    for(contador = 0; contador < 10; contador++) {
        aluno[contador].notaFinal =
            (aluno[contador].nota1 + aluno[contador].nota2 + aluno[contador].nota3 + aluno[contador].nota4) / 4;
    }
}

void verificaAprovadosReprovados(Matricula aluno[10]) {
    int contador, qtdAprovados=0;
    for(contador = 0; contador < 10; contador++) {
        if(aluno[contador].notaFinal >= 5) {
            aluno[contador].situacao = 1;
        } else {
            aluno[contador].situacao = 0;
        }
    }
}

void mostrarAprovados(Matricula aluno[10]) {
    int contador;

    cout << "----- ALUNOS APROVADOS -----" << endl;

    for(contador = 0; contador < 10; contador++) {
        if(aluno[contador].situacao == 1) {
            cout << "Nome : " << aluno[contador].nome << endl;
        }
    }
}

void mostrarReprovados(Matricula aluno[10]) {
    int contador;

    cout << "----- ALUNOS REPROVADOS -----" << endl;

    for(contador = 0; contador < 10; contador++) {
        if(aluno[contador].situacao == 0) {
        cout << "Nome: " << aluno[contador].nome << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Matricula aluno[10];

    cadastrar(aluno);

    calculaNotaFinal(aluno);

    verificaAprovadosReprovados(aluno);

    mostrarAprovados(aluno);

    mostrarReprovados(aluno);

    return 0;
}
