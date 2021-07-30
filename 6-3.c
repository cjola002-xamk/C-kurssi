#include <stdio.h>

int main(){

    int arvosana, summa, maara;
    float keskiarvo;
    maara = 0;
    summa = 0;
    arvosana = 0;
	keskiarvo = 0.0;

    printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\n");
    printf("Lopetus negatiivisella kokonaisluvulla.\n");

    
    while(arvosana >= 0)
    {
        
        printf("Anna arvosana (4-10):");
        scanf("%d", &arvosana);

        if(arvosana < 0){
            break;
        }
        else{
            maara++;
            summa = summa + arvosana;
        }
    }

    keskiarvo = (float)summa / (float)maara;

    printf("Ohjelmaan syötetty %d arvosanaa.\n", maara);
    printf("Arvosanojen keskiarvo: %.2f\n", keskiarvo);


    

	return 0;
}