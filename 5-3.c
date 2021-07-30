#include <stdio.h>

int main(){
	
	int valinta, ekaluku, tokaluku, tulos;

	printf("1: vähennyslasku\n");
	printf("2: yhteenlasku\n");
	printf("3: kertolasku\n");
	
	printf("Valitse toiminto:");
	scanf("%d", &valinta);
	
	printf("Anna eka luku:");
	scanf("%d", &ekaluku);
	
	printf("Anna toka luku:");
	scanf("%d", &tokaluku);
	
	switch(valinta){
		
		case 1:
			tulos = ekaluku - tokaluku;
			printf("%d-%d=%d", ekaluku, tokaluku, tulos);
			break;
		case 2:
			tulos = ekaluku + tokaluku;
			printf("%d+%d=%d", ekaluku, tokaluku, tulos);
			break;
		case 3:
			tulos = ekaluku * tokaluku;
			printf("%d*%d=%d", ekaluku, tokaluku, tulos);
			break;
		default:
			break;
			
	}
	
	return 0;
	
}