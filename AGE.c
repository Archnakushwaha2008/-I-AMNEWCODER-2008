#include <stdio.h>
int main () {
	int age ;
	printf(" Enter your age : ");
	scanf("%d", &age);
	
	if ( age >= 18) {
		printf(" You are adult and You can Vote\n");
		
	}
	
	if ( age < 18) {
		printf(" You are not adult and You can note Vote\n");
		
	}
	
	int color ;
	printf(" Enter your color : ");
	scanf("%d", &color);
	
	if (color < 10) {
		printf(" Red\n");
	}
	
	if (color > 30) {
		printf(" Green\n");
	}
	if (color == 20){
		printf(" Black\n");
	}
	
	if (color > 40)  {
	printf("Pink\n ");
	}
	
	return 0;
}
