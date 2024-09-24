 /*Écrivez un programme pour trouver le volume d'une sphère.
  Prenez le rayon de la sphère en entrée de l'utilisateur. Formule pour le volume d'une sphère :
Volume = (4/3) * π * r³*/
 #include<stdio.h>
 #include<math.h>
int main(){
    const float PI=3.14;
    float r,v;
    printf("saisir le rayon");
    scanf("%f",&r);
    v=(4*PI*pow(r,3)/3);
    printf("le volume est:%2.f",v);
    return 0;

}
