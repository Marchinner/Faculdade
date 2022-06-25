#include <iostream>
#include <locale.h>

using namespace std;

struct Inscricao {
    int matricula;
    char tipo;
    int socio;
};

int lerLista(Inscricao aluno[200]) {
    int contador=0, continuar=0, escolha;
    do {
        cout << "===== INSCRIÇÃO NÚMERO " << contador + 1 << " =====" << endl;

        cout << "N° Matrícula: ";
        cin >> aluno[contador].matricula;

        cout << endl;

        cout << "Tipo de Inscrição: " << endl <<
            "A - 1 curso" << endl <<
            "B - 2 cursos" << endl <<
            "C - 3 cursos" << endl <<
            "D - outros" << endl <<
            "Sua escolha: ";
        cin >> aluno[contador].tipo;

        cout << endl;

        cout << "Sócio? (Sim = 1; Não = 0)" << endl <<
            "R: ";
        cin >> aluno[contador].socio;

        cout << endl;

        contador++;

        cout << "Adicionar mais cadastros? (Sim = 1; Não = 0)" << endl <<
            "R: ";
        cin >> escolha;

        if(escolha == 1 && contador < 199) {
            continuar = 1;
        } else {
            continuar = 0;
        }
    } while(continuar == 1);

    return contador;
}

float calculaTotalPago(Inscricao aluno[200], int totalAlunos) {
    float totalArrecadado = 0, fatorSocio;
    int contador = 0;

    for(contador = 0; contador < totalAlunos; contador++) {
        if(aluno[contador].socio == 1) {
            fatorSocio = 0.5;
        } else {
            fatorSocio = 1;
        }

        if(aluno[contador].tipo == 'A') {
            totalArrecadado += 30 * fatorSocio;
        } else {
            if(aluno[contador].tipo == 'B') {
                totalArrecadado += 60 * fatorSocio;
            } else {
                if(aluno[contador].tipo == 'C') {
                    totalArrecadado += 90 * fatorSocio;
                } else {
                    totalArrecadado += 100 * fatorSocio;
                }
            }
        }
    }

    return totalArrecadado;
}

void tipoInscricao(Inscricao aluno[200], int totalAlunos) {
    int totalA=0, totalB=0, totalC=0, totalD=0, contador;

    for(contador = 0; contador < totalAlunos; contador++) {
        if(aluno[contador].tipo == 'A') {
            totalA++;
        } else {
            if(aluno[contador].tipo == 'B') {
                totalB++;
            } else {
                if(aluno[contador].tipo == 'C') {
                    totalC++;
                } else {
                    totalD++;
                }
            }
        }
    }

    cout << "===== TOTAL DE ALUNOS POR TIPO =====" << endl <<
        "A = " << totalA << endl <<
        "B = " << totalB << endl <<
        "C = " << totalC << endl <<
        "D = " << totalD << endl;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int totalAlunos, totalArrecadado;

    Inscricao aluno[200];

    totalAlunos = lerLista(aluno);

    totalArrecadado = calculaTotalPago(aluno, totalAlunos);

    cout << "O total arrecadado foi de " << totalArrecadado << " R$" << endl;

    tipoInscricao(aluno, totalAlunos);

    return 0;
}
