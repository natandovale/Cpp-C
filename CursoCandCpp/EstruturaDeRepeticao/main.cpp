#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	//int n = 1;

	//while( n <= 100)
	//{
	//    cout << n << endl;
	//	n++;
	//}
	
	//int i = 1;
	//for(;;)
	//{
	//	if(i>100)
	//		break;
	//	cout << i << endl;
	//	i++; 
	//}
	
	//int k, j;
	//for(k = 1,j = 1; k <= 10; k++, j++)
	//{
	//	cout << k << endl;
	//	cout << j << endl;
	//}

	//Calculo de farorial
	int num, fat = 1;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	for(int i = 1; i <= num; i++)
		fat = fat * (i + 1);
	cout << "Fatorial: " << fat << endl;
	
	return 0;
}
