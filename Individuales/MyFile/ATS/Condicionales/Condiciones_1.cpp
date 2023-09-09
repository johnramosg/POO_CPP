#include<iostream>
using namespace std;

int main(){
  int numero=0, dato=5;

  cout<<"Digite un numero: ";
  cin>>numero;

  if(numero==dato){
    cout<<"El numero es 5"<<endl;
  }
  else{
    cout<<"El numero es diferente de 5"<<endl;
  }

  return 0;
}