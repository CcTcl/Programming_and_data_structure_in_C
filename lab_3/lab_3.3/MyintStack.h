#include <stdio.h>
#define MAX 100

typedef int ElemType;

typedef struct{
	ElemType elem[MAX];
	int top;
}Stack;

void MakeNull(Stack *s){
	s -> top = -1;
}

int isEmpty(Stack s){
	return s.top < 0 ? 1 : 0;
}

ElemType Top(Stack s){
	if(isEmpty(s)) return NULL;
	else return s.elem[s.top];
}

void Pop(Stack *s){
	s -> top -= 1;
}

void Push(Stack *s, ElemType a){
	s -> top += 1;
	s -> elem[s -> top] = a;
}
