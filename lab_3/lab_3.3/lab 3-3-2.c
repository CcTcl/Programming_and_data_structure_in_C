#include <stdio.h>
#include "MyintStack.h"

int main(){
	Stack s;
	int n, i;
	
	do{
		printf("Please input a decimal number:");
		fflush(stdin);
		scanf("%u", &n);
	}while(n<=0);
	
	MakeNull(&s);
	while(n>0){
		Push(&s, n%8);
		n /= 8;
	}
	
	while(!isEmpty(s)){
		printf("%d", Top(s));
		Pop(&s);
	}
	printf("o");
	
	return 0;
}

