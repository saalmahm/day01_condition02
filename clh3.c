#include <stdio.h>

int main() {
    int ja,ju,s,jr;

   printf("entrer le Nombre total de jours de cong�s accord�s : \n");
   scanf("%d",&ja);
   printf("entrer le Nombre de jours de cong�s utilis�s : \n");
   scanf("%d",&ju);
    if (ju>ja){
     printf("attention ! es jours utilis�s d�passent les jours accord�s! \n");

  return 1;}
   printf("entrer votre Statut(0 pour temps partiel, 1 pour temps plein): \n");
   scanf("%d",&s);

switch(s){
    case 0:
    jr=ja-ju;
    printf("vos jours restant sont : %d",jr);
    break;
    case 2:
    jr=(ja/2)-ju;
    printf("vos jours restant sont : %d",jr);
    break;
    default:
    printf("invalide statut");
}
    return 0;
}
