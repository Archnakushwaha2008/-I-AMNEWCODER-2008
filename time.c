#include<stdio.h>
int main() {
	
	int time ;
	printf(" Enter your Time : ");
	scanf("%d", &time);
	

	if (time < 11) {
		printf(" Good Morning\n");
	}
	
	if (time > 20) {
	printf(" Good Night\n ");
	}
	
	
	return 0;
}
