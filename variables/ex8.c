/* Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur. Formule :

Moyenne géométrique = (a * b * c)^(1/3)*/

#include<stdio.h>
int main(){
     float a,b,c,moy;
    printf("veuillez saisir le premier nombre ");
   scanf("%f",&a);
    printf("veuillez saisir le deuxieme nombre ");
    scanf("%f",&b);
    printf("veuillez saisir le  troisieme nombre ");
    scanf("%f",&c);
    moy=(a * b * c)/3;
       printf("la moyenne est %f",moy);
    return 0;
}