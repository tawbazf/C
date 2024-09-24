/*Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5
*/

#include<stdio.h>
int main(){
    float a,b,c,pond;
    printf("veuillez saisir le premier nombre ");
   scanf("%f",&a);
    printf("veuillez saisir le deuxieme nombre ");
    scanf("%f",&b);
    printf("veuillez saisir le  troisieme nombre ");
    scanf("%f",&c);
    a=a*2;
    b=b*3;
    c=c*5;
    pond=a+b+c;
    printf("ponderation%f",pond);
    return 0;
}
