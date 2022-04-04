#include <stdio.h>
#define MAX 100

typedef struct{
	float elem[MAX];
	int top;
}floatStack;

void fMakeNull(floatStack *s){
	s -> top = -1;
}

int fisEmpty(floatStack s){
	return s.top < 0 ? 1 : 0;
}

float fTop(floatStack s){
	if(fisEmpty(s)) return 0;
	else return s.elem[s.top];
}

void fPop(floatStack *s){
	s -> top -= 1;
}

void fPush(floatStack *s, float a){
	s -> top += 1;
	s -> elem[s -> top] = a;
}
