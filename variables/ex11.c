/*Écrivez un programme pour trouver la surface d'un rectangle. 
Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. 
Formule pour la surface d'un rectangle :
Surface = longueur * largeur*/
 #include<stdio.h>
 #include<math.h>
int main(){
    float l,L,s;
     printf("veuillez saisir la longeur ");
   scanf("%f",&l);
    printf("veuillez saisir la largeur  ");
    scanf("%f",&L);
    s=l*L;
    printf("la surface du rectangle est %f ",s);
    return 0;
}