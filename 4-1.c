#include <stdio.h>

int main(){

	int eka_luku, toka_luku, summa, erotus, tulo;
	
	printf("Anna eka luku:");
	scanf("%d", &eka_luku);
	printf("Anna toka luku:");
	scanf("%d", &toka_luku);
	
	summa = eka_luku + toka_luku;
	erotus = eka_luku - toka_luku;
	tulo = eka_luku * toka_luku;
	
	printf("%d+%d=%d\n", eka_luku, toka_luku, summa);
	printf("%d-%d=%d\n", eka_luku, toka_luku, erotus);
	printf("%d*%d=%d\n", eka_luku, toka_luku, tulo);
	
	

}