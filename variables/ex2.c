// Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin K = C + 273.15
#include<stdio.h>
 int main(){
    float temp,k;
    printf("veuillez saisir la temperature en celsius");
    scanf("%f",&temp);
k=temp+273.15;
printf("la valeur de temperature en kelvin est %f",k);

    return 0;
 }
