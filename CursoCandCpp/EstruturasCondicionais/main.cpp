#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int dinheiro = 9;

	if(dinheiro > 10 )
	{
		cout << "Eu vou ao cinema" << endl;
	}
	else
	{
		cout << "Nao vou ao cinema" << endl;
	}

	int n = 11;
	if((n % 2 == 0))
	{
		cout << "Numero impar";
	}
	

	int num = 9;
	switch(num)
	{
	case 9:
		cout << "Numero 9" << endl;
		break;
	case 10:
		cout << "Numero 10" << endl;
		break;
	case 11:
		cout << "Numero 11" << endl;
		break;
	default:
		cout << "Numero nao encontrado";
	}
	
	return 0;
}
