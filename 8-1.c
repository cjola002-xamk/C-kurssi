#include <stdio.h>

int main(){

        int paivat;
        float tunnit, tunnitYhteensa, keskiarvo;


        printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\ntehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n\n");
        printf("Kuinka monta päivää:");

        scanf("%d", &paivat);
        float tuntiTaulukko[paivat]; //declare array size

        for(int x = 1; x <= paivat; x++){
                printf("Anna %d. päivän työtunnit:",x);
                scanf("%f", &tunnit);
                tuntiTaulukko[x-1] = tunnit;
                tunnitYhteensa += (float)tunnit; // lasketaan tunnit yhteensä
        }

        //Keskiarvon laskeminen
        keskiarvo = tunnitYhteensa / paivat;

        //Tulostus
        printf("Tehdyt työtunnit yhteensä: %.1f \n", tunnitYhteensa);
        printf("Keskimääräinen työpäivän pituus: %.1f \n", keskiarvo);
        printf("Syötetyt tunnit:");
        for(int x = 0; x < paivat; x++){
                printf("%.1f ", tuntiTaulukko[x]);
        }

        printf("\n");

        return 0;
}
