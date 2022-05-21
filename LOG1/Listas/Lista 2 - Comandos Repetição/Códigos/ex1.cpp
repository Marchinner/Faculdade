#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade, pessoas=0, maioresDeIdade=0;
	
	do{
	
		cout << "Insira uma idade: ";
		cin >> idade;
		
		if(idade >= 18) {
			maioresDeIdade++;
		}
		
		pessoas++;
	} while(pessoas < 10);
	
	cout << "Pessoas maiores de 18 anos: " << maioresDeIdade;
	
	return 0;
}
