 //Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. 
//  Formule :Yards = Km * 1093.61
 #include<stdio.h>
 int main(){
        float kilom,Yard;
    printf("veuillez saisir la distance en kilometres");
    scanf("%f",&kilom);
Yard=kilom* 1093.61;
printf("la valeur de la distance en yards est %f",Yard);

    return 0;
 }