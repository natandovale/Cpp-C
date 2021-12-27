#include <iostream>
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

	return 0;
}
