#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int factorial=1,n;
	
	cout<<"Digite un numero: ";cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n>0){
			factorial*=i;
		}
		else if(n==0){
			cout<<"El factorial de "<<n<<"es : 1";			
		}
	}
	cout<<"El factorial de "<<n<<" es: "<<factorial;	
	
	getch();
	return 0;
} 
