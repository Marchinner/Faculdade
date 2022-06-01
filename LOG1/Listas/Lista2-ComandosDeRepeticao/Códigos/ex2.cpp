#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int pessoas, idade, entre1E15=0, entre16E30=0, entre31E45=0, entre46E60=0, maiorDe60=0, porcentEntre1E15=0,porcentEntre16E30=0, porcentEntre31E45=0, porcentEntre46E60=0, porcentMaiorDe60=0;
    
    for (pessoas = 0; pessoas < 15; pessoas++) {
        cout << "Insira uma idade: ";
        cin >> idade;

        if (idade >= 1 && idade <= 15) {
            entre1E15++;
        } else if (idade >= 16 && idade <= 30) {
            entre16E30++;
        } else if (idade >= 31 && idade <= 45) {
            entre31E45++;
        } else if (idade >= 46 && idade <= 60) {
            entre46E60++;
        } else if (idade >= 61) {
            maiorDe60++;
        } else {
            cout << "Idade inválida!";
            pessoas--;
        }
    }

    porcentEntre1E15 = (entre1E15 * 100) / 15;
    porcentEntre16E30 = (entre16E30 * 100) / 15;
    porcentEntre31E45 = (entre31E45 * 100) / 15;
    porcentEntre46E60 = (entre46E60 * 100) / 15;
    porcentMaiorDe60 = (maiorDe60 * 100) / 15;

    cout << "Pessoas entre 1 e 15 anos: " << entre1E15 << endl;
    cout << "Porcentagem: " << porcentEntre1E15 << "%" << endl;
    cout << "Pessoas entre 16 e 30 anos: " << entre16E30 << endl;
    cout << "Porcentagem: " << porcentEntre16E30 << "%" <<  endl;
    cout << "Pessoas entre 31 e 45 anos: " << entre31E45 << endl;
    cout << "Porcentagem: " << porcentEntre31E45 << "%" <<  endl;
    cout << "Pessoas entre 46 e 60 anos: " << entre46E60 << endl;
    cout << "Porcentagem: " << porcentEntre46E60 << "%" <<  endl;
    cout << "Pessoas maiores de 60 anos: " << maiorDe60 << endl;
    cout << "Porcentagem: " << porcentMaiorDe60 << "%" <<  endl;
    

    return 0;
}