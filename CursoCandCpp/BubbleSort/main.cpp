#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

class Carro
{
public:
	char nome[100];
	char cor[20];
	char placa[20];
	double preco;
};

//ordenacao utilizando Bubble sort
void ordena(Carro vet[], int tam)
{
	Carro aux;
	
	for(int i = tam; i >= 0; i--)
	{
		 for(int j = 1; j <= i; j++)
		 {
			 if(strcmp(vet[j-1].nome, vet[j].nome) == 1){
				 aux = vet[j-1];
				 vet[j -1] = vet[j];
				 vet[j] = aux;
			 }
		 }	
	}
}

int main(int argc, char *argv[])
{
	char resp;
	Carro carros[MAX];
	int i = 0;
	
	while(true){
		cout << "Digite o nome do carro: ";
		cin >> carros[i].nome;
		cout << "Digite o preco: ";
		cin >> carros[i].preco;
		cout << "Voce deseja continuar? <S>SIM ou <N>NAO: ";
		cin >> resp;
		if(resp != 'S') break;
		cout << endl;
	    i++;
	}
	cout << endl;
	ordena(carros, i);
	for(int j = 0; j <= i; j++)
	{
		cout << "Nome do carro:" << carros[j].nome << " ";
		cout << "Preco: R$ " << carros[j].preco;
		cout << endl;
	}
	return 0;
}