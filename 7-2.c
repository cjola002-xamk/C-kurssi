//Globaalit muuttujat
int luku1,luku2,tulos;

int main(){

        int valinta;
        void summa(void);
        void erotus(void);
        void tulo(void);

        do{

                printf("1:kahden luvun summa\n2:kahden luvun erotus\n3:kahden luvun tulo\n <0: ohjelman lopetus\n");
                printf("Valitse laskutoimitus:");
                scanf("%d", &valinta);

                if(valinta < 0) {
                printf("Ohjelma lopetetaan...");
                }
                else if(valinta == 1) {
                summa();
                }
                else if(valinta == 2) {
                erotus();
                }
                else if(valinta == 3) {
                tulo();
                }
                else {
                printf("Antamasi luku ei kelpaa.\n\n");
                }
                }while(valinta>0);

        return 0;
}

void summa(){

        printf("Syötä ensimmäinen luku:");
        scanf("%d", &luku1);
        printf("Syötä toinen luku:");
        scanf("%d", &luku2);

        tulos = luku1 + luku2;
        printf("%d + %d = %d\n", luku1, luku2, tulos);
}

void erotus(){

        printf("Syötä ensimmäinen luku:");
        scanf("%d", &luku1);
        printf("Syötä toinen luku:");
        scanf("%d", &luku2);

        tulos = luku1 - luku2;
        printf("%d - %d = %d\n", luku1, luku2, tulos);
}


void tulo(){


        printf("Syötä ensimmäinen luku:");
        scanf("%d", &luku1);
        printf("Syötä toinen luku:");
        scanf("%d", &luku2);

        tulos = luku1 * luku2;
        printf("%d * %d = %d\n", luku1, luku2, tulos);
}