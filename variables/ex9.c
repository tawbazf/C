/*Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D. Formule :

Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)*/
#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2,z1,z2;
    float distance;
      printf("veuillez saisir l abs du 1 nombre ");
   scanf("%d",&x1);
    printf("veuillez saisir le cordo du 1 nombre ");
    scanf("%d",&y1);
    printf("veuillez saisir le cote du 1 nombre ");
    scanf("%d",&z1);
       printf("veuillez saisir l abs du 2 nombre ");
   scanf("%d",&x2);
    printf("veuillez saisir le cordo du 2 nombre ");
    scanf("%d",&y2);
    printf("veuillez saisir le cote du 2 nombre ");
    scanf("%d",&z2);
    distance=sqrt(  ( (x2-x1)*(x2-x1) )  + ( (y2-y1)*(y2-y1) ) +( (z2-z1) *(z2-z1) ));
    printf("la distance est%.2f ",distance);
    return 0;
}