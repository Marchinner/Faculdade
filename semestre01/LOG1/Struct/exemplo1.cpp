#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 2

struct Alunos {
    string nome;
    int matricula;
    float nota1;
    float nota2;
    float media;
};

void lerLista(Alunos aluno[2]) {
    int contador;

    for(contador = 0; contador < 1; contador++) {
        cout << "N° Matrícula: ";
        cin >> aluno[contador].matricula;

        cout << "Nome: ";
        cin >> aluno[contador].nome;

        cout << "Nota 1: ";
        cin >> aluno[contador].nota1;

        cout << "Nota 2: ";
        cin >> aluno[contador].nota2;

        aluno[contador].media = (aluno[contador].nota1 + aluno[contador].nota2) / 2;
    }
}

void imprimirLista(Alunos aluno[2]) {
    int contador;

    for(contador = 0; contador < 1; contador++) {
        cout << "N° Matrícula: ";
        cin >> aluno[contador].matricula;

        cout << "Nome: ";
        cin >> aluno[contador].nome;

        cout << "Nota 1: ";
        cin >> aluno[contador].nota1;

        cout << "Nota 2: ";
        cin >> aluno[contador].nota2;

        aluno[contador].media = (aluno[contador].nota1 + aluno[contador].nota2) / 2;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");


}
