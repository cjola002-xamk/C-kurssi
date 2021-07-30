#include <stdio.h>

int main(){

char etunimi[16];
char sukunimi[21];
char tiedostoNimi[13];

        printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\n");
        printf("Syötä etunimesi:");
        scanf("%s", etunimi);
        printf("Syötä sukunimesi:");
        scanf("%s", sukunimi);

        printf("Tiedosto johon haluat tallentaa nimesi:");
        scanf("%s", tiedostoNimi);

        FILE *tied_nimi = fopen(tiedostoNimi, "w");

        if(tied_nimi == NULL){
                printf("Tiedoston avauksessa tapahtunut virhe!");
                return 0;
        }
        else{
                fprintf(tied_nimi, "%s %s", etunimi, sukunimi);
                fclose(tied_nimi);
        }




        printf("Tallennus onnistui!\n");

        return 0;
}

