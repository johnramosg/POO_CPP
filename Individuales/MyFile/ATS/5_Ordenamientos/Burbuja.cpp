//Metodo burbuja

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numeros[]={5,4,2,3,1};
	int aux,i,j;
	
	for(i=5;i>=0;i--){
		for(int j=5;j>=0;j--){
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	
	for (i=4;i>=0;i--){
		cout<<numeros[i]<<endl;
	}
	
	
	system("pause");
	return 0;
}
