
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
int array[5],i,rango,mas_grande,valor_moda,frecu;
int frec[5]={0};
clrscr ();

printf ("Digite los valores del arreglo:\n\n");
for (i=0;i<5;i++){
scanf ("%d",&array[i]);
}
for (i=0;i<5;i++){
frec[array[i]]++;
}

for (rango=1;rango<=5;rango++)
{
if (frec[rango]>mas_grande){
mas_grande=frec[rango];
valor_moda=rango;
}

}
printf ("El valor moda es %d",valor_moda);


getch ();
}