#include <iostream>
#include <locale.h>

using namespace std;

struct Cities {
    string name;
    string state;
    int population;
};

int cityRegister(Cities city[20]) {
    int counter, largestPopulation=0, mostPopulatedCity;

    for(counter = 0; counter < 20; counter++) {
        cout << "Nome da cidade: ";
        cin >> city[counter].name;

        cout << "Estado: ";
        cin >> city[counter].state;

        cout << "População: ";
        cin >> city[counter].population;

        if(city[counter].population > largestPopulation) {
            mostPopulatedCity = counter;
        }
    }

    return mostPopulatedCity;
}

void showCities(Cities city[20], int mostPopulatedCity) {
    int counter;

    cout << "Cidades do estado do Paraná: " << endl;

    for(counter = 0; counter < 20; counter++) {
        if(city[counter].state == "Paraná") {
            cout << city[counter].name;
        }
    }

    cout << "Dados da cidade mais populosa: " << endl;
    cout << "Cidade: " << city[mostPopulatedCity].name << endl;
    cout << "Estado: " << city[mostPopulatedCity].state << endl;
    cout << "População: " << city[mostPopulatedCity].population << endl;
}

int main() {
    Cities city[20];
    int mostPopulatedCity;

    cityRegister(city);

    showCities(city, mostPopulatedCity);

    return 0;
}
