#include <iostream>
using namespace std;

//ponteiros s�o variaveis que cont�m o endere�o de outra vari�vel na memoria interna do pc
void foo(int* n)
{
	*n = 20;
}

int main(int argc, char** argv)
{
	int var = 10;
	//int* pvar;
	//inicializando com o endere�o da variavel (var) usando '&'
	//pvar = &var;
	//cout << *pvar << endl;
	//*pvar = 20;
	foo(&var);
	cout << var << endl;
	
	return 0;
}
