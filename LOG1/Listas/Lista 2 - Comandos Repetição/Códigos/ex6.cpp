#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int continuar=1, voto, votos=0, votosCandidato1=0, votosCandidato2=0, votosCandidato3=0, votosCandidato4=0, votosCandidato5=0, votosCandidato6=0, votosNulos=0, votosBrancos=0, porcentNulos=0, porcentBrancos=0;

    while (continuar == 1)
    {
        cout << "Insira uma das opções abaixo para escolher o voto ou cancelar: " << endl;
        cout << "1 - Candidato 01" << endl;
        cout << "2 - Candidato 01" << endl;
        cout << "3 - Candidato 01" << endl;
        cout << "4 - Candidato 01" << endl;
        cout << "5 - Candidato 01" << endl;
        cout << "6 - Candidato 01" << endl;
        cout << "7 - Anular Voto" << endl;
        cout << "8 - Votar em Branco" << endl;
        cout << "0 - Candidato 01" << endl;
        cout << "Sua escolha: ";
        cin >> voto;

        if (voto == 1)
        {
            votosCandidato1++;
        }
        else if (voto == 2)
        {
            votosCandidato2++;
        }
        else if (voto == 3)
        {
            votosCandidato3++;
        }
        else if (voto == 4)
        {
            votosCandidato4++;
        }
        else if (voto == 5)
        {
            votosCandidato5++;
        }
        else if (voto == 6)
        {
            votosCandidato6++;
        }
        else if (voto == 7)
        {
            votosNulos++;
        }
        else if (voto == 8)
        {
            votosBrancos++;
        }
        else if (voto == 0)
        {
            continuar = 0;
            votos--;
        }
        else
        {
            cout << "Opção inválida!!" << endl;
        }

        votos++;
    }
    cout << "Votos: " << votos << endl;
    porcentNulos = (votosNulos * 100) / votos;
    porcentBrancos = (votosBrancos * 100) / votos;

    cout << "Total de votos para o candidato 1: " << votosCandidato1 << endl;
    cout << "Total de votos para o candidato 2: " << votosCandidato2 << endl;
    cout << "Total de votos para o candidato 3: " << votosCandidato3 << endl;
    cout << "Total de votos para o candidato 4: " << votosCandidato4 << endl;
    cout << "Total de votos para o candidato 5: " << votosCandidato5 << endl;
    cout << "Total de votos para o candidato 6: " << votosCandidato6 << endl;
    cout << "Total de votos nulos: " << votosNulos << endl;
    cout << "Total de votos em branco: " << votosBrancos << endl;
    cout << "Porcentagem de votos nulos: " << porcentNulos << "%" << endl;
    cout << "Porcentagem de votos em branco: " << porcentBrancos << "%" << endl;

    return 0;
}
