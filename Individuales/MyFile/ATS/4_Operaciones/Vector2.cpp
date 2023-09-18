#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int vector[]={1,2,3,4},suma=1;
	for (int i=0;i<=3;i++){
		suma*=vector[i];
	}
	cout<<suma<<endl<<endl;
	system("pause");
	return 0;
}
