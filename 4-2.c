#include <stdio.h>

int main(){
	
	int luku = 0;
	
	printf("Anna kokonaisluku:");
	scanf("%d", &luku);
	
	if((luku%2) == 0){
		printf("Luku on 0");	
	}
	else{
		printf("Luku on 1");
	}
	
	return 0;
}