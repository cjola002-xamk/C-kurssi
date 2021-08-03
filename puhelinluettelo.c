#include <stdio.h>

int main(void){

    FILE *kirj_tied;
    char luettelo[] = "luettelo.txt";


    // henkilö structure
    struct henkilo{
        char etunimi[21];
        char sukunimi[21];
        char numero[21];
    } henkilo_1;

    printf("Anna etunimi:");
    scanf("%s", henkilo_1.etunimi);
    printf("Anna sukunimi:");
    scanf("%s", henkilo_1.sukunimi);
    printf("Anna puhelinnumero:");
    scanf("%s", henkilo_1.numero);


    // avataan tiedosto append tilaan

    if ((kirj_tied = fopen(luettelo, "a")) == NULL){
        printf("Virhe tiedoston avaamisessa");
        return 0; 
    }
    else{
        fprintf(kirj_tied, "%s %s %s\n", henkilo_1.etunimi, henkilo_1.sukunimi, henkilo_1.numero);
    }
    
    fclose(kirj_tied);
    printf("Tietojen tallennus onnistui.");


    return 0;
}

