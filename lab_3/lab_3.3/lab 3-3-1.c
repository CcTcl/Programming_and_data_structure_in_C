#include <stdio.h>
#include "MychrStack.h"

int main(){
	Stack s;
	char a[MAX], c;
	int i=0;
	
	printf("Please input an expression:\n");
	fflush(stdin);
	gets(a);
	
	MakeNull(&s);
	while(1){
		c = a[i];
		
		if(c == '\0'){
			break;
		}
		else if(c == '('){
			Push(&s, c);
		}
		else if(c == ')'){
			if(isEmpty(s)){
				printf("NO");
				return 0;
			}
			else{
				Pop(&s);
			}
		}
		
		i++;
	}
	
	if(!isEmpty(s)) printf("NO");
	else printf("YES");
	
	return 0;
}
