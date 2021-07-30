#include <stdio.h>

int main()
{
	float markkaMaara;
	float markatEuroina;
	
	
	printf("Syötä jokin markkamäärä:");
	scanf("%f", &markkaMaara);
	
	markatEuroina = markkaMaara / 5.94573;
	
	printf("Markat euroina: %.2f", markatEuroina);
	return 0;	
}