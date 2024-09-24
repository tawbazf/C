/* Deux nombres réels, a et b, sont saisis au clavier. 
Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.*/
#include<stdio.h>
int main(){
float a,b;
printf("veuillez saisir le premier nombre ");
scanf("%f",&a);
printf("veuillez saisir le deuxieme nombre ");
scanf("%f",&b);
printf("a+b=%f", a+b);
printf("a-b=%f", a-b);
printf("a*b=%f", a*b);
 if (a!=0) printf("a/b=%f", a/b);



}