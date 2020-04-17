#include<iostream>
#include<stdlib.h>// system("pause");
#include<conio.h>// getch();
using namespace std;
class Persona{// clase padre
	private:// atributos
		string nombre;
		int edad;
	public:// metodos
		Persona(string, int);//constructor
	void mostrarPersona();		
};
class Alumno : public Persona{
	private:// atributos
		string codigoAlumno;
		float notaFinal;
	public:
		Alumno(string,int,string,float);//constructor calse alumno
		void mostrarAlumno();	
		
	
};
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno,float _notaFinal):Persona(_nombre,_edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}
void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo alumno: "<<codigoAlumno<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
}
int main(){
	string a, c;
	int b;
	float d;
	cout<<"Digite nombre del alumno\n";
	cin>>a;
	cout<<"Digite edad del alumno\n";
	cin>>b;
	cout<<"Digite codigo del alumno\n";
	cin>>c;
	cout<<"Digite nota del alumno\n";
	cin>>d;
	Alumno alumno1(a, b,c, d);
	alumno1.mostrarAlumno();
	getch();
	return 0;
}
