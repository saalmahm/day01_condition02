#include <stdio.h>
int main() {
  int r,s,d;
    printf("Entrer le Revenu annuel (en euros)");
    scanf("%d",&r);
    printf("Entrer le Score de cr�dit (sur 1000)");
    scanf("%d",&s);
    printf("Entrer la Dur�e du pr�t (en ann�es)");
    scanf("%d",&d);
    if (r >= 30000  && s >= 700 && d <= 10  ){
        printf("�ligible");
    }else if(r >= 30000 && s >= 650 && d<= 15 ){
        printf("�ligible avec conditions");
    } else if(r >= 30000 && s >= 650 && d <= 15){
        printf("Non �ligible");
    }

    return 0;
}
