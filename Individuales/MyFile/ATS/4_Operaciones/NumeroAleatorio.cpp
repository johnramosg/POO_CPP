#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	 
	 int dato, numero,contador=0;
	 
	 srand(time(NULL));
	 dato=1+rand()%(100);
	 
	 do{
	 	cout<<"Digite un numero: ";cin>>numero;
	 	
	 	if (dato>numero){
	 		cout<<"Ingrese un numero mayor"<<endl;
	 	}
	 	if (dato<numero){
	 		cout<<"Ingrese un numero menor"<<endl;
		}
		contador++;
		 }while(dato!=numero);
		 
	 	cout<<"Ganaste!!!!"<<endl;
	 	cout<<"Numero intentos: "<<contador<<endl;
	 	
	 
	 
	system("pause");
	return 0;
}
