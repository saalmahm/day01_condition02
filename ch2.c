#include <stdio.h>

int main() {
    int a, v, n;
    float pb, p;

    printf("Entrer le Prime de base (en euros) \n");
    scanf("%f", &pb);

    printf("Entrer l'�ge du conducteur (en ann�es) \n");
    scanf("%d", &a);

    printf("Entrer le Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) \n");
    scanf("%d", &v);

    printf("Entrer le Nombre d'accidents au cours des 5 derni�res ann�es \n");
    scanf("%d", &n);

    // Calculer la prime de base en fonction de l'�ge du conducteur
    if (a < 25) {
        p = pb * 1.5;
    } else if (a >= 25 && a <= 65) {
        p = pb;
    } else {
        p = pb * 1.2;
    }

    // Ajuster la prime selon le type de voiture
    switch (v) {
        case 1: // Sportive
            p *= 2;
            break;
        case 2: // Utilitaire
            p *= 1.2;
            break;
        case 3: // Familiale
            p *= 1.1;
            break;
        default:
            printf("Type de voiture invalide.\n");
            return 1; // Quitter avec une erreur
    }

    // Ajuster la prim#include <stdio.h>
int main() {
  int a,v,n;
  float pb,p;
  printf("Entrer le Prime de base \n");
    scanf("%f",&pb);
    printf("Entrer l\'�ge du conducteur (en ann�es) \n");
    scanf("%d",&a);
    printf("Entrer le Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) \n");
    scanf("%d",&v);
    printf("Entrer le Nombre d'accidents au cours des 5 derni�res ann�es \n");
    scanf("%d",&n);
if (a<25){
    p=pb*1.5;
} else if(a>=25 && a<=65){
    p=pb;
} else if(a>65){
    p=pb*1.2;
}
switch(v){
    case 1:
    p*=2;break;
    case 2:
    p*=1.2;break;
    case 3:
    p*=1.1;
    break;
       default:
            printf("Type de voiture invalide.\n");
            return 1;
}
if(n>1){
    p*=1.3;
}
printf("la prime d'assurance  est: %.2f",p);
    return 0;
}
