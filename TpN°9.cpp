#include <iostream>

using namespace std;

int main()
{
	cout<<"Morena";
	float N1=0;
	float N2=0;
	float N3=0;
	float prom=0;
		cout<<"La primer calificacion es:";
	cin>> N1;
		cout<<"La segunda calificacion es:";
	cin>> N2;
		cout<<"La tercer calificacion es:";
	cin>> N3;
	prom=(N1+N2+N3)/3;
	cout<<"Su promedio es:"<<prom<<endl;
	if (prom<7)
	{
	cout<<"Desaprobo";
	}
	else if (prom==7)
	{
		cout<<"Aprobo";
	}
	else if (prom>7)
	{
		cout<< "Excelente";
	}
	
	return 0;
}
