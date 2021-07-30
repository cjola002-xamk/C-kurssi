#include <stdio.h>
#include <string.h>

/*
Tee ohjelma, joka kysyy käyttäjältä jonkin sanan (max. 15 pientä kirjainta)
ja laskee sanassa esiintyvien vokaalien (a, e, i, o, u, y) määrän. 
*/


int main(){

        char sana[16];
        char vokaalit[7] = {'a','e','i','o','u','y'};
        int vokaaliMaara = 0;

        printf("Ohjelma laskee vokaalien määriä.\n");
        printf("Anna sana:");
        scanf("%s", sana);

        for(int x = 0; x < strlen(sana); x++){
                for(int i = 0; i < strlen(vokaalit); i++){
                        if(sana[x] == vokaalit[i]){
                                vokaaliMaara++;
                        }
                }
        }

        printf("Sanassa vokaaleja: %d\n", vokaaliMaara);


        return 0;
}