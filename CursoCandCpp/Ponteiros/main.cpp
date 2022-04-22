#include <iostream>
#include <string.h>
using namespace std;

//ponteiros são variaveis que contêm o endereço de outra variável na memoria interna do pc

void foo(int* n)
{
	*n = 20;
}

int main(int argc, char** argv)
{
	int var = 10;
	// declara um ponteiro para um inteiro,um ponteiro para uma variável do tipo inteiro
	//int* pvar;
	//inicializando com o endereço da variavel (var) usando '&'
	//pvar = &var;
	//cout << *pvar << endl;
	//O "*" acessa o conteudo da variavel apontada pelo ponteiro
	//*pvar = 20;
	foo(&var);
	cout << var << endl;
	
	//A variavel vetor é um ponteiro que aponta para o começo da sequência elementos do vetor na memória.
	//Portanto, podemos inicializar uma variável ponteiro com o endereço de início do vetor.
	//int aux[4];
	
	//aux[0] = 10;
	//aux[1] = 20;
	//aux[2] = 30;
	//aux[3] = 40;
	
	//for(int i = 0; i < sizeof(aux)/sizeof(int); i++)
	//	cout << aux[i] << endl; 

	//int* vet = new int[10];
	
	//cout << "Digite um numero: ";
	//cin >> *[vet];
	//cout << "Você digitou: " << *(vet) << endl;
	
	//cout << "Digite um numero: ";
	//cin >> *[vet + 1];
	//cout << "Você digitou: " << *(vet +1) << endl;
	//liberando a memoria do ponteiro
	//delete[] vet;
	//vet = NULL;
///////////////////////////////////////////////////	
	//ponteiros de ponteiros
	//int array[] = {1,2,3,4,5};
	//int* parray = &array[4];
	//int** pparray = &parray;
	
	//cout << **pparray << endl;
	
	//String invertida
	char nome[100];
	int tam;
	char* pfim;
	char* pini;
	
	cout << "Digite um nome: ";
	cin  >> nome;
	
	tam = strlen(nome);
	pfim = &nome[tam - 1];	
	pini = &nome[0];
	
	while(true){
		cout << *pfim;
		if(pfim-- == pini) break;
	}
	cout << endl;
	return 0;
		
	return 0;
}
