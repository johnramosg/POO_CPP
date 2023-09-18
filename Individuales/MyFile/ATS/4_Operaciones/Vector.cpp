#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int vector[]={1,2,3,4,5,6},suma=0;
	for (int i=0;i<=5;i++){
		suma+=vector[i];
	}
	cout<<suma<<endl<<endl;
	system("pause");
	return 0;
}
