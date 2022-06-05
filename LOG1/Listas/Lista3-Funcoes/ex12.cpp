#include <iostream>
#include <locale.h>

using namespace std;

void estacao(int dia, int mes) {
    int estacao;

    if(mes <= 3) {
        if(mes == 3 && dia >= 21) {
            estacao = 3;
        }
        estacao = 2;
    } else if(mes <=6) {
        if(mes == 6 && dia >= 21) {
            estacao = 4;
        }
        estacao = 3;
    } else if(mes <= 9) {
        if(mes == 9 && dia >= 23) {
            estacao = 1;
        }
        estacao = 4;
    } else if(mes <= 12) {
        if(mes == 12 && dia >= 21) {
            estacao = 2;
        }
        estacao = 1;
    }

    switch(estacao) {
        case 1:
            cout << "Primavera" << endl;
            break;

        case 2:
            cout << "Verão" << endl;
            break;

        case 3:
            cout << "Outono" << endl;
            break;

        case 4:
            cout << "Inverno" << endl;
            break;
    }

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, continua;

    do {
        cout << "Insira o número para o mês: " << endl <<
            "Exemplo: 1 - Janeiro, 2 - Fevereiro ...." << endl <<
            "Sua escolha: ";
        cin >> mes;

        if(mes >= 1 && mes <= 12) {
            continua = 0;
        } else {
            cout << "Mês inválido!" << endl;
            
            continua = 1;
        }
    } while(continua == 1);

    do {
        cout << "Insira o número do dia: " << endl;
        cin >> dia;

        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            if(dia >= 1 && dia <= 31) {
                continua = 0;
            } else {
                cout << "Dia inválido!" << endl;
                continua = 1;
            }
        } else if(mes == 2) {
            if(dia >= 1 && dia <= 29) {
                continua = 0;
            } else {
                cout << "Dia inválido!" << endl;
                continua = 1;
            }
        } else if(dia >= 1 && dia <= 30) {
            continua = 0;
        } else {
            cout << "Dia inválido!" << endl;
            continua = 1;
        }
    } while(continua == 1);

    cout << "A estação que corresponde ao dia " << dia << " do mês " << mes << " é ";
    estacao(dia, mes);

}
