#include<iostream>
#include<conio.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

float comprobar(float promedio){
	for (int i=0;i<3;i++){
		if(alumnos[i].promedio>promedio){
			promedio=alumnos[i].promedio;
		}
	}
	return promedio;
}

int pedirdatos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Digite el nombre de "<<i+1<<"o alumno: ";
		cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Digite la edad de "<<i+1<<"o alumno: ";
		cin>>alumnos[i].edad;
		cout<<"Digite el promedio de "<<i+1<<"o alumno: ";
		cin>>alumnos[i].promedio;
		comprobar(alumnos[i].promedio);
		cout<<endl;
	}
}

int mostrar(){
	float promedio;
	promedio=comprobar(0);
	for(int i=0;i<3;i++)
	{
	cout<<"Alumno "<<i+1<<endl;
	cout<<"Nombre: "<<alumnos[i].nombre<<endl;
	cout<<"Edad: "<<alumnos[i].edad<<endl;
	cout<<"Promedio: "<<alumnos[i].promedio<<endl;
	cout<<endl;
	}
	cout<<"El mejor promedio es: "<<promedio<<endl;
}
int main(){
	pedirdatos();
	mostrar();
}
