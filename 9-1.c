#include <stdio.h>

int main(){

        //#Avataan tiedosto

        FILE *tied_nimi;
        int luku1, luku2, luku3, luku4, summa;

        if((tied_nimi = fopen("luvut.s", "r")) == NULL){
                printf("Tiedostoa ei löydetty");
                return 0;
        }
        else{
                fscanf(tied_nimi, "%d %d %d %d", &luku1, &luku2, &luku3, &luku4);
                fclose(tied_nimi);
                printf("Tiedostosta luvut.s löytyneet luvut:\n");
                printf("%d, %d, %d ja %d\n", luku1, luku2, luku3, luku4);

                summa = luku1 + luku2 + luku3 + luku4;

                printf("Lukujen summa: %d", summa);
        }


        return 0;
}
