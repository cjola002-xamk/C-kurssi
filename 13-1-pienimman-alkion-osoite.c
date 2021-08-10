#include <stdio.h>

//funktion prototyyppi: 
int *pienimman_arvon_osoite(int *luvut, int koko);

int main(void){

    int luvut[] = { 21, 55, 13, 23, 43 };
    int koko = 5;

    int *pienin = pienimman_arvon_osoite(luvut, koko);

    printf("taulukon pienin luku on: %d", *pienin);
    return 0;
}

int *pienimman_arvon_osoite(int *luvut, int koko){

    int *pienin;
	pienin = &luvut[0];

    for(int x = 0; x < koko; x++){

        if(luvut[x] < *pienin){
            pienin = &luvut[x];
        }
    }

    return pienin;
}


