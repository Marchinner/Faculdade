#include <iostream>
#include <locale.h>

using namespace std;

struct Schedule {
    int code;
    int departureHour;
    int departureMinutes;
    int passengers;
    float ticketPrice;
    string origin;
    string destination;
    int isMorning;
};

void registerSchedule(Schedule flight[10]) {
    int counter, totalMinutes;

    cout << "===== CADASTRO DE VOOS =====" << endl;

    for(counter = 0; counter < 10; counter++) {
        cout << "Código: ";
        cin >> flight[counter].code;

        cout << "Hora: ";
        cin >> flight[counter].departureHour;

        cout << "Minutos: ";
        cin >> flight[counter].departureMinutes;

        cout << "Passageiros: ";
        cin >> flight[counter].passengers;

        cout << "Preço da passagem: ";
        cin >> flight[counter].ticketPrice;

        cout << "Origem: ";
        cin >> flight[counter].origin;

        cout << "Destino: ";
        cin >> flight[counter].destination;

        totalMinutes = flight[counter].departureHour * 60 + flight[counter].departureMinutes;

        if(totalMinutes >= 300 && totalMinutes <= 720) {
            flight[counter].isMorning = 1;
        } else {
            flight[counter].isMorning = 0;
        }
    }
}

void morningFlights(string flightOrigin, Schedule flight[10]) {
    int counter;

    for(counter = 0; counter < 10; counter++) {
        if(flightOrigin == flight[counter].origin) {
            cout << "Código do voo: " << flight[counter].code << endl;
            cout << "Horário de saída: " << flight[counter].departureHour << ":" << flight[counter].departureMinutes << endl;
            cout << "Passageiros: " << flight[counter].passengers << endl;
            cout << "Preço da passagem: " << flight[counter].ticketPrice << endl;
            cout << "Origem: " << flight[counter].origin << endl;
            cout << "Destino: " << flight[counter].destination << endl;
        }
    }

    cout << "===== VOOS QUE SAEM DE MANHÃ =====" << endl;

    for(counter = 0; counter < 10; counter++) {
        if(flight[counter].isMorning == 1) {
            cout << "Código: " << flight[counter].code;
            cout << "Origem: " << flight[counter].origin;
            cout << "Destino: " << flight[counter].destination;
        }
    }

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Schedule flight[10];

    string flightOrigin;

    registerSchedule(flight);

    morningFlights(flightOrigin, flight);

    return 0;
}
