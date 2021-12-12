#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome[])
{
	//obtendo o tamanho da string
	int tam;
	for(tam = 0; nome[tam]; tam++);
	cout << "tamanho: " << tam << endl;
    for(int i = tam - 1; i >= 0; i--)
		cout << nome[i];	
}

int main(int argc, char** argv)
{
	//int vetor[] = {1,2,3,4};
	//char nome[] = {'a','b','c','d','e','\0'};
	//for(int i = 0; i < 4; i++)
	//	cout << vetor[i] << endl;
	
	char nome[] = "marcos";
	inverte(nome);
	return 0;
}