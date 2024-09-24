/*Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz*/
#include<stdio.h>
 int main(){
     int temperature;
    printf("Entrez la température en Celsius : ");
    scanf("%d", &temperature);
    if (temperature < 0) {
        printf("L'état de l'eau est : Solide\n");
    } else if (temperature >= 0 && temperature < 100) {
        printf("L'état de l'eau est : Liquide\n");
    } else {
        printf("L'état de l'eau est : Gaz\n");
    }

    return 0;
}
