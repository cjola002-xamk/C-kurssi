#include <stdio.h>

//Globaalit muuttujat

int luku1,luku2,luku3,pieninLuku,suurinLuku;
int suurin();
int pienin();

int main(){

        printf("Anna 1. luku:");
        scanf("%d", &luku1);

        printf("Anna 2. luku:");
        scanf("%d", &luku2);

        printf("Anna 3. luku:");
        scanf("%d", &luku3);

        suurin();
        pienin();

        printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.\n", suurinLuku, pieninLuku);
        return 0;

}

int suurin(){

        if(luku1>luku2 && luku1 > luku3){
                suurinLuku = luku1;
        }
        else if(luku2 > luku1 && luku2 > luku3){
                suurinLuku = luku2;
        }
        else{
                suurinLuku = luku3;
        }

        return 0;

}


int pienin(){

        if(luku1<luku2 && luku1 < luku3){
                pieninLuku = luku1;
        }
        else if(luku2 < luku1 && luku2 < luku3){
                pieninLuku = luku2;
        }
        else{
                pieninLuku = luku3;
        }
        return 0;


}