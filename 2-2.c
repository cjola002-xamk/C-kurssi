#include <stdio.h>

int main()
{
	int luku, nelio;
	
	printf("Anna kokonaisluku:");
	scanf("%d", &luku);
	
	nelio = luku * luku;
	
	printf("Antamasi luvun neliö on %d", nelio);

	return 0;
}
