#include <stdio.h>

int main(){

	char kahvi;
	int kuppi;
	char vastaus;
	
	printf("Juotko kahvia vai teetä (k/t)?");
	
	kahvi = getchar();
	getchar();
	
	printf("Montako kuppia juot päivässä:");
	scanf("%d", &kuppi);
	
	//kahvin valinta
	if(kahvi == 'k' || kahvi == 'K'){
	
		switch(kuppi){
			case 0 ... 2:
				printf("Et taida juoda paljoa kahvia.");
				break;
			case 3 ... 20:
				printf("Juotpa paljon kahvia!");
				break;
			default:
				printf("Ohjelmassa tapahtunut virhe!\n");
				break;
		}
	}
	
	//teen valinta
	else if(kahvi == 't' ||kahvi == 'T'){
		
		switch(kuppi){
			case 0 ... 2:
				printf("Et taida juoda paljoa teetä.");
				break;
			case 3 ... 20:
				printf("Juotpa paljon teetä!");
				break;
			default:
				printf("Ohjelmassa tapahtunut virhe!\n");
				break;
		}
	}
	
	//jos valinta menee väärin niin tulee virhe	
	else{
		printf("Ohjelmassa tapahtunut virhe!\n");
	}
	
	return 0;
	
}