#include <iostream>
#include <locale.h>

using namespace std;

#define MAX 5

struct Catalog {
    int code;
    string title;
    string genre;
    string category;
    float locationPrice;
};

void readMovies(Catalog movie[MAX]) {
    int counter;

    cout << "========== CADASTRO DE FILMES ==========" << endl;

    for(counter = 0; counter < MAX; counter++) {
        
        cout << endl << "FILME N°" << counter + 1 << endl;

        cout << "Código: ";
        cin >> movie[counter].code;

        cout << "Título: ";
        cin >> movie[counter].title;

        cout << "Gênero: ";
        cin >> movie[counter].genre;

        cout << "Categoria: ";
        cin >> movie[counter].category;

        cout << "Preço de locação: ";
        cin >> movie[counter].locationPrice;
    }
}

float calculateFinalPrice(Catalog movie[MAX], int quantity) {
    int movies=0, movieCode, codeExists, counter, finalPrice=0, position;

    cout << "========= CÁLCULO DO PREÇO FINAL DA LOCAÇÃO =========" << endl;

    do {
        cout << "Código do filme: ";
        cin >> movieCode;

        codeExists = 0;

        for(counter = 0; counter < MAX; counter++) {
            if(movieCode == movie[counter].code) {
                codeExists = 1;
                position = counter;
            }
        }

        if(codeExists == 1) {
            finalPrice += movie[position].locationPrice;

            movies++;
        } else {
            cout << "Código Inválido!" << endl;
        }
    } while(movies < quantity);

    return finalPrice;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Catalog movie[MAX];
    int quantity;
    float finalPrice;

    readMovies(movie);

    cout << "Quantos filmes foram alugados: ";
    cin >> quantity;

    finalPrice = calculateFinalPrice(movie, quantity);

    cout << "Preço final da locação: " << finalPrice << " R$" << endl;

    return 0;
}
