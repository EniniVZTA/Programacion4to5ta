#include <iostream>

using namespace std;

int main()
{
	cout<<"¿Eres culpable?:"<<endl;
	int respuesta=0;
	cout<< "1=No 2=Si :";
	cin>>respuesta;
	if(respuesta == 1)
	cout<<"Iras a casa";
	if(respuesta == 2)
	cout<< "Iras a la carcel";
	
	return 0;
}
