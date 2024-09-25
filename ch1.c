#include <stdio.h>
int main() {
  int r,s,d;
    printf("Entrer le Revenu annuel (en euros)");
    scanf("%d",&r);
    printf("Entrer le Score de crédit (sur 1000)");
    scanf("%d",&s);
    printf("Entrer la Durée du prêt (en années)");
    scanf("%d",&d);
    if (r >= 30000  && s >= 700 && d <= 10  ){
        printf("Éligible");
    }else if(r >= 30000 && s >= 650 && d<= 15 ){
        printf("Éligible avec conditions");
    } else if(r >= 30000 && s >= 650 && d <= 15){
        printf("Non éligible");
    }

    return 0;
}
