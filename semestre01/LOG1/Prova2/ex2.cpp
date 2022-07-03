#include <iostream>
#include <locale.h>

using namespace std;

struct Equipamentos {
    string nome;
    float potencia;
    float tempoAtivo;
    float consumo;
};

void cadastrarEquipamento(Equipamentos eletro[5]) {
    int contador;

    cout << "===== CADASTRO DO ELETRÔNICO ======" << endl;

    for(contador = 0; contador < 5; contador++) {
        cout << "- Eletrônico [" << contador + 1 << "] -" << endl;

        cout << "Nome: ";
        cin >> eletro[contador].nome;

        cout << "Potência em kW: ";
        cin >> eletro[contador].potencia;

        cout << "Tempo ativo por dia (em horas): ";
        cin >> eletro[contador].tempoAtivo;
    }
}

void calculaConsumo(Equipamentos eletro[5], int tempoUso) {
    float consumoTotal =0, consumoRelativo;
    int contador;

    for(contador = 0; contador < 5; contador++) {
        eletro[contador].consumo = (eletro[contador].potencia * eletro[contador].tempoAtivo);

        consumoTotal += eletro[contador].consumo;
    }

    cout << "===== CONSUMO RELATIVO DOS EQUIPAMENTOS =====" << endl;

    for(contador = 0; contador < 5; contador++) {
        consumoRelativo = (eletro[contador].consumo / consumoTotal) * 100;

        cout << "Equipamento [" << contador + 1 << "]: " << consumoRelativo << " %" << endl;
    }

    cout << endl << "CONSUMO TOTAL EM " << tempoUso << " DIAS: " << consumoTotal << " kW"<< endl;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Equipamentos eletro[5];

    int tempoUso;

    cadastrarEquipamento(eletro);

    cout << "Qual o tempo em dias de uso: ";
    cin >> tempoUso;

    calculaConsumo(eletro, tempoUso);

    return 0;
}
