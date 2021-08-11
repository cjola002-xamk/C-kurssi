#include <stdio.h> 
#include <stdlib.h>

void laske_ja_tulosta(int *, int);

int main(int argc, char *argv[])
{
  int x, summa=0, koko=5, taulukko[5];
  if(argc == 6){ 
  /* Ohjelman nimi ja komentoriviltä annetut parametrit */
    for(x=0;x<argc-1;x++){
      taulukko[x] = atoi(argv[x+1]);
    }
    laske_ja_tulosta(taulukko, koko);
  }else{
    printf("Virheellinen määrä komentoriviargumentteja\n");
  }
  return 0;
} 

void laske_ja_tulosta(int *taulukko, int koko){

    int summa;
    

    printf("Taulukon alkiot: ");

    for(int i = 0; i < koko; i++){
        summa += taulukko[i];
        printf("%d ", taulukko[i]);
    }

    printf("Summa = %d", summa);


}
