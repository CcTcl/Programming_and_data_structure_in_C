#include <stdio.h>
#define MAX 100

typedef char ElemType;

typedef struct{
	ElemType elem[MAX];
	int top;
}chrStack;

void MakeNull(chrStack *s){
	s -> top = -1;
}

int isEmpty(chrStack s){
	return s.top < 0 ? 1 : 0;
}

ElemType Top(chrStack s){
	if(isEmpty(s)) return NULL;
	else return s.elem[s.top];
}

void Pop(chrStack *s){
	s -> top -= 1;
}

void Push(chrStack *s, ElemType a){
	s -> top += 1;
	s -> elem[s -> top] = a;
}
