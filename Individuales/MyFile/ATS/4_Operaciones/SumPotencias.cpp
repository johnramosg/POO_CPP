#include <iostream>
#include<math.h>
using namespace std;

int main(){
	int suma,numero;
	
	cout<<"Digite el maximo exponente: ";cin>>numero;
	
	if(numero>0){
		for(int i=1;i<=numero;i++){
			suma+=pow(2,i);
		}
	}
	else{
		cout<<"No se puede realizar el calculo!!!!";
	}
	
	cout<<"Resultado: "<<suma;
	
	return 0;
}
