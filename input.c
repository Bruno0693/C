#include <stdio.h>



int main(void)

{
	int age = 0 ;
	int x, y =0 ;

	printf("Quel âge avez-vous ? ") ;
	scanf("%d", &age) ;
	printf("Vous avez %d ans\n", age) ;
	printf("Essayons à présent autre chose\n Vous allez entrer deux nombres entiers :\n") ;
	scanf("%d", &x) ;
	scanf("%d", &y) ;
	printf("Vous avez entré :\n x = %d et y = %d", x,y);

	return 0 ;
}