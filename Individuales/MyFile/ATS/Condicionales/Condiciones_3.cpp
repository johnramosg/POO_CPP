/*1. Escriba un programa que lea dos numeros y determine cual de los es el mayor*/
#include<iostream>
using namespace std;

int main (){
  int numero1=0,numero2;
  cout<<"Digite el primer numero: ";
  cin>>numero1;
  cout<<"Digite el segundo numero: ";
  cin>>numero2;
  if(numero1>numero2){
    cout<<"El numero mayor es: "<<numero1;
  }
  else if(numero2>numero1){
    cout<<"El numero es mayor"<<numero2;
  }
  else{
    cout<<"Los numero son iguales";
  }

  return 0;
}