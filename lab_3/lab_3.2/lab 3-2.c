#include <stdio.h>
#include "MyComplex.h"

int main(){
	Complex a, b;
	a = CreateComplex(1, 2);
	b = CreateComplex(3, 4);
	
	printf("Complex a = ");
	PrintComplex(a);
	printf("Complex b = ");
	PrintComplex(b);
	
	printf("Complex a + b = ");
	PrintComplex(CompAdd(a, b));
	
	printf("Complex a - b = ");
	PrintComplex(CompSub(a, b));
	
	printf("Complex a * b = ");
	PrintComplex(CompMul(a, b));
	
	printf("Complex a / b = ");
	PrintComplex(CompDiv(a, b));
	
	return 0;
}
