#include <stdio.h>
#include <string.h>

int main(void){

    FILE *avattava_tied;
    FILE *kirj_tied;

    char luettelo[] = "luettelo.txt";
    char temp[] = "luettelo_temp.txt";

    char nimi[63];
    int kierros = 0;
    char etunimi[20];
    char sukunimi[20];

    int osumat = 0; 


    printf("Anna etunimi:");
    scanf("%s", etunimi);
    printf("Anna sukunimi:");
    scanf("%s", sukunimi);

  

    avattava_tied = fopen(luettelo,"r");
    kirj_tied = fopen(temp, "w");


// Avataan tiedosto
    if(!avattava_tied){
        printf("Virhe luettavan tiedoston avaamisessa");
        return 0;
    }
    
    if(!kirj_tied){
        printf("Virhe kirjoitettavan tiedoston avaamisessa");
        return 0;
    }
    
    else{

        //verrataan tekstiä nimi muuttujaan.

//Jos osumia löytyy, kirjataan osumamäärä muuttujaan osumat. Jos ei niin kirjoitetaan nimi uuteen temppitiedostoon joka nimetään lopussa alkuperäisen nimellä.
        while((fgets(nimi, 63, avattava_tied)) != NULL){

            if(strstr(nimi, etunimi) == NULL && strstr(nimi, sukunimi) == NULL){
                fprintf(kirj_tied, "%s", nimi);
            }
            else{
                osumat++;
            }

        }

        if(osumat > 0){
            printf("Tiedot poistettu luettelosta.\n");
        }
        else{
            printf("Etsimääsi henkilöä ei löytynyt luettelosta.\n");
        }

    }

    fclose(avattava_tied);
    fclose(kirj_tied);
    remove(luettelo);
    rename(temp, luettelo);

    return 0;
}
