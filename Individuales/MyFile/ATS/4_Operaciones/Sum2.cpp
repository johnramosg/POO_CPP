#include <iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,sumap = 0,suman = 0,res = 0;

	cout<<"Para la expresion 1-2+3-4+5-6 ......n";
	cout<<"\n\nIntroduzca el valor de n: ";
	cin>>n;

	for (int i=1; i<=n; i +=2)
	{
 	sumap += i;
	}
	for (int j=2; j<=n; j +=2)
	{
 	suman +=j;
	}

res= sumap-suman;
cout<<"\nEl resultado es: "<<res<<endl;

}
