#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int suma,numero;
	cout<<"Digite un numero: ";cin>>numero;
	for(int i=1;i<=numero;i++){
		suma+=i;
		cout<<suma<<endl;
	}
	
	getch();
	return 0;
}
