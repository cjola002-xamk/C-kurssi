#include <stdio.h>
#include <string.h>



int main(){

    FILE *avattava_tied;

    char luettelo[] = "luettelo.txt";
    char teksti[63]; 

    //Tiedoston avaaminen

    //jos tiedoston avaaminen epäonnistuu, tulee virheilmoitus
    if((avattava_tied = fopen(luettelo, "r")) == NULL){
        printf("Virhe tiedoston avaamisessa");
        return 0;
    }
    else{

        //tulostetaan tiedoston sisältö
        while((fgets(teksti, 63, avattava_tied)) != NULL){
            
            if(strlen(teksti) >2 ){
                printf("%s", teksti);
            }
        }
    }

    fclose(avattava_tied);

    return 0; 
}