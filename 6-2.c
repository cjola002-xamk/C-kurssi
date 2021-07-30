#include <stdio.h>

int main(){
	
	int luku, i, kertoma;	
	
	printf("Anna kokonaisluku:");
	scanf("%d", &luku);
	kertoma = luku;

	for(i = luku - 1; i > 0; i--){
		kertoma = kertoma * i;
	}
	
	printf("Luvun %d kertoma on %d", luku, kertoma);
	
	return 0;
}