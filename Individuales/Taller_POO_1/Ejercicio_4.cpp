/*
Autor: John Jaider Ramos Gaviria
Correo: ramos.john@correounivalle.edu.co
Fecha creación: 2023-09-18
Fecha última modificación: 2023-09-19
*/

#include<iostream>
#include<stdlib.h>

using namespace std;
//Definimos una funcion para calcular las notas
float calcular(float nota1,float nota2,float nota3){//nota1=notapractica,nota2=notateorica,nota3=notaparticipacion
	nota1*=0.3;
	nota2*=0.6;//Calculamos el porcentaje de las notas
	nota3*=0.1;
	
	float notafinal=nota1+nota2+nota3;//Sumamos para hallar el valor de la nota final
	
	return notafinal;//retornamos la nota final para usarla en la funcion principal
}

//Definimos una funcion para comprobar si la nota esta en el rango
float comprobar(float nota){//cada nota ingresa para ser comprobada
	if(nota>5||nota<0){//si la nota es mayor que 5 o menor que 0 se cumple esta condicion
		do{//este bucle se repite si la nota esta fuera del rango hasta ingresar un valor dentro del rango
			cout<<"La nota esta fuera del rango"<<endl;
			cout<<"Digite una nota valida: ";cin>>nota;
		}while(nota<0 || nota>5);
	}
	return nota;//retornamos nota para seguir con el proceso
}	

//Definimos la funcion principal
int main(){
	float notapractica,notateorica,notaparticipacion,notafinal;//declaramos las funciones que usaremos
	
	cout<<"Digite la nota de practica: ";cin>>notapractica;
	notapractica=comprobar(notapractica);//pedimos la nota de practica de la entrada y la enviamos a la funcion comprobar, si es valida se guarda en la variable
	
	cout<<"Digite la nota teorica: ";cin>>notateorica;
	notateorica=comprobar(notateorica);//pedimos la nota teorica de la entrada y la enviamos a la funcion comprobar, si es valida se guarda en la variable
	
	cout<<"Digite la nota de participacion: ";cin>>notaparticipacion;
	notaparticipacion=comprobar(notaparticipacion);//pedimos la nota de participacion de la entrada y la enviamos a la funcion comprobar, si es valida se guarda en la variable
	
	notafinal=calcular(notapractica,notateorica,notaparticipacion);//enviamos las variables a la funcion calcular y luego se guarda en la variable nota final
	
	cout<<"La nota final es: "<<notafinal<<endl;//mostramos en pantalla la nota final
	
	system("pause");//para que el ejecutable no se cierre automaticamente
	return 0;
}
