#include <stdio.h>

int main()
{
	int kokonaisLuku; 
	float desimaaliLuku;
	
	printf("Anna kokonaisluku:");
	scanf("%d", &kokonaisLuku);
	
	printf("Anna desimaaliluku:");
	scanf("%f", &desimaaliLuku);
	
	printf("Syöttämäsi kokonaisluku: %d \n", kokonaisLuku);
	printf("Syöttämäsi desimaaliluku kahden desimaalin tarkkuudella: %.2f", desimaaliLuku);
	return 0;	
}