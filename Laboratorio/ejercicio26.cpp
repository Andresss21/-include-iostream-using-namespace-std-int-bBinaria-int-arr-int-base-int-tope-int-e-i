#include <iostream>
using namespace std;



int main()
{
  struct complejos{
    float real;
    float imaginario;

  };

  complejos numero;

  cout<<"Porfavor ingrese parte real "<<endl;
  cin>>numero.real;

  cout<<"Porfavor ingrese parte imaginaria "<<endl;
  cin>>numero.imaginario;

  cout<< "el conjugado es: "<<numero.real;

  if (numero.imaginario>0){
  cout<< "-"<<numero.imaginario<<"j";
  }

  else{
    cout<< "+"<<numero.imaginario*-1<<"j";
  }
}
