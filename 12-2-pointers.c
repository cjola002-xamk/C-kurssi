#include <stdio.h>

//esitellään funktio
void muuta_lukua(int *x);

int main(){
 
  int x;
  printf("Anna lukux: ");
  scanf("%d", &x);
  printf("Pääohjelmassa: x = %d\n", x);
  muuta_lukua(&x);
  printf("Pääohjelmassa: x = %d\n", x);
  return 0;
}


void muuta_lukua(int *x){
	
	*x = *x + 3;
	printf("Aliohjelmassa: x = %d\n", *x);
	
	
	return 0;
}
