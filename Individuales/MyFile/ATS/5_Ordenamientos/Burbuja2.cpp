//Metodo burbuja

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numeros[]={5,4,2,3,1};
	int aux,i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	
	for (i=0;i<5;i++){
		cout<<numeros[i]<<endl;
	}
	
	
	system("pause");
	return 0;
}
