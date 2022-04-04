#include <stdio.h>
#include "MychrStack.h"
#include "MyfloatStack.h"
/*

+ .... 0
- .... 1
* .... 2
/ .... 3
( .... 4
) .... 5

*/

int convert(char c){
	switch(c){
		case '+':
			return 0;
		case '-':
			return 1;
		case '*':
			return 2;
		case '/':
			return 3;
		case '(':
			return 4;
		case ')':
			return 5;
	}
}

int main(){
	chrStack ops;
	char a[MAX], c;
	int comp[6][6] = {
		{1,1,-1,-1,-1,1},
		{1,1,-1,-1,-1,1},
		{1,1,1,1,-1,1},
		{1,1,1,1,-1,1},
		{-1,-1,-1,-1,-1,0},
		{1,1,1,1,0,1}
	};
	int i=0;
	char que[MAX];
	int count = 0;
	
	printf("Please input an expression:\n");
	fflush(stdin);
	gets(a);
	
	MakeNull(&ops);
	
	while(1){
		c = a[i];
		
		if(c == '\0'){
			while(!isEmpty(ops)){
                printf("%c", Top(ops));
                que[count] = Top(ops);
                count++;
                Pop(&ops);
            }
            break;
		}
		else if(c>='0' && c<='9'){
			printf("%c ", c);
			que[count] = c;
			count++;
		}
		else if(c=='+' || c=='-' || c=='*' || c=='/'){
			if(isEmpty(ops)){
				Push(&ops, c);
			}
			else{
				if(comp[convert(Top(ops))][convert(c)] < 0){
					Push(&ops, c);
				}
				else{
					do{
						printf("%c ", Top(ops));
						que[count] = Top(ops);
						count++;
						Pop(&ops);
					}while(comp[convert(Top(ops))][convert(c)] >= 0 && (!isEmpty(ops)));
					Push(&ops, c);
				}
			}
		}
		else if(c=='('){
			Push(&ops, c);
		}
		else if(c==')'){
			do{
				printf("%c ", Top(ops));
				que[count] = Top(ops);
				count++;
				Pop(&ops);
			}while(Top(ops) != '(' && (!isEmpty(ops)));
			Pop(&ops);
		}
		i++;
	}
	printf("\n");
	
	floatStack nums;
	int j;
	float x, b;
	
	fMakeNull(&nums);
	
	for(j=0;j<count;j++){
		if(que[j]>='0' && que[j]<='9'){
			fPush(&nums, que[j]-48);
		}
		else if(que[j]=='+' || que[j]=='-' || que[j]=='*' || que[j]=='/'){
			b = fTop(nums);
			fPop(&nums);
			x = fTop(nums);
			fPop(&nums);
			switch(que[j]){
				case '+':
					x += b;
					fPush(&nums, x);
					break;
				case '-':
					x -= b;
					fPush(&nums, x);
					break;
				case '*':
					x *= b;
					fPush(&nums, x);
					break;
				case '/':
					x /= b;
					fPush(&nums, x);
					break;
			}
		}
	}
	printf("%f", fTop(nums));
	
	return 0;
}
