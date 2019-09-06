#include <iostream>
using namespace std;


int main()
{
int valor,valor2, conteo;

cout<< "ingrese el valor"<<endl;
cin>>valor;

conteo = valor;
valor2 = 0;

if (valor2!=valor){
  do{
    valor2 = valor2+1;
    cout<<valor2<<endl;
  }
  while(valor2<conteo);

    if(valor2 = conteo){
      do{
        valor2 = valor-1;
        valor = valor2;
        cout<<valor<<endl;
      }
      while(valor>1);
    }
}



}
