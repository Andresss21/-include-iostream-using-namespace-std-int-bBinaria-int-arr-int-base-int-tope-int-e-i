#include <iostream>
using namespace std;


int main()
{

 int mayor, menor, residuo;

cout<<"ingrese el termino mayor"<<endl;
cin>>mayor;
cout<<"ingrese el temrino menor"<<endl;
cin>>menor;

//comentario: si pide siempre dividr el mayor entre el menor el residuo nunca sera 0
residuo=mayor/menor;
cout<<"residuo: "<<residuo<<endl;
if (residuo<1){
  cout<<"el residuo es diferente de 0"<<endl;
  do{
    cout<<"se vuelve a realizar el proceso"<<endl;
    mayor=menor;
    cout<<"el nuevo mayor: "<<mayor<<endl;
    menor=residuo;
    cout<<"el nuevo menor: "<<menor<<endl;
    residuo=mayor/menor;
    cout<<"el nuevo residuo: "<<residuo<<endl;
  }while(residuo>=1);
}

if(residuo<=1){

  cout<<"el mcd es: "<<menor<<endl;
}

}
