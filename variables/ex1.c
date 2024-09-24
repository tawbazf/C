 /* Challenge 1 : Affichage Informations
Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge,
 sexe, et adresse email. Les données sont saisies à partir du clavier.*/
 #include<stdio.h>
 int main(){

    int age;
     char nom[50];
    char prenom[50];
    char sexe[150];
    char email[150];
    printf("veuillez saisir votre nom\n");
    scanf("%s",&nom);
    printf("veuillez saisir votre prenom\n");
    scanf("%s",&prenom);
    printf("veuillez saisir votre age\n");
    scanf("%d",&age);
    printf("veuillez saisir votre sexe");
    scanf("%s",&sexe);
    printf("veuillez saisir votre email");
    scanf("%s",&email);
    printf("\n=== Informations Personnelles ===\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("age : %d\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Email : %s", email);
    return 0;
 }

