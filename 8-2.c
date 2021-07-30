#include <stdio.h>

int main(){
	int matriisi[5][5] =
	{
    	4, 6, 25, 88, 5,
    	34, 5, 300, 4, 65,
    	78, 43, 11, 90, 125,
    	98, 585, 12, 63, 21,
    	45, 35, 9, 5, 1
	};
	
	int summa;
	summa = 0;
	
	printf("Taulukon:\n");

	for(int x = 0; x < 5; x++){
	
		for(int j = 0; j <5; j++){
			printf("%d ", matriisi[x][j]);
			summa += matriisi[x][j];
			
		}
		printf("\n");
	}
	
	printf("\n\n");
	printf("alkioiden summa on %d\n", summa);
	return 0;
}