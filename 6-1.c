#include <stdio.h>

int main(){
	
	int luku, i; 
	
	printf("Anna kokonaisluku:");
	scanf("%d", &luku);
	
	for(i = 1; i <= luku; i++){
		printf("%d\n", i);
	}
	
	return 0;
}