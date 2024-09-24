/*Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans l'ordre inverse 
sans utiliser de boucle. 
Par exemple, si le nombre entier est 1234, son inverse est 4321.*/
 #include<math.h>
int main() {
    int nombre;
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);
    int milliers = nombre / 1000;
    int centaines = (nombre / 100) % 10;
    int dizaines = (nombre / 10) % 10;
    int unites = nombre % 10;
    printf("L'inverse est : %d%d%d%d\n", unites, dizaines, centaines, milliers);

    return 0;}