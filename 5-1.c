#include <stdio.h>

int main(){
	
	int kokonaisluku;
	
	//Kysytään kokonaisluku
	printf("Anna kokonaisluku:");
	scanf("%d", &kokonaisluku);
	
	if((kokonaisluku%2) == 0){
		printf("Luku %d on parillinen.", kokonaisluku);
	}
	else{
		printf("Luku %d on pariton.", kokonaisluku);
	}
	
	return 0;
	
}