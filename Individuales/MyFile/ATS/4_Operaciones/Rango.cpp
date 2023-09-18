#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int numero,suma=0;
	
	do{
		cout<<"Ingrese un numero: "; cin>> numero;
		if(numero>0){
			suma+=numero; //suma=suma+numero
		}
		
	}while(numero!=0 && (numero<20 ||numero>30));
	cout<<suma<<endl;
	
	getch();
	return 0;
}
