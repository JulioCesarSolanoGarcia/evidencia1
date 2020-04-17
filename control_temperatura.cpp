#include<iostream>
using namespace std;
int main()
{
	float temperatura;
	cout<<"INGRESO A LA CAMARA DETECTORA DEL SEGUNDO SINTOMA DEL COVID-19\n";
	cout<<"\nPor favor ingrese su temperatura\n";
	cin>>temperatura;
	if(temperatura>37)
	{
		cout<<"\nNecesitas chequeo de un medico, tienes uno de los sintomas del virus\n\n";
	}
	else
	{
		cout<<"\nCuidate\n";
	}
	system("pause");
	return 0;
}	
