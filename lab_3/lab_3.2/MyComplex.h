#include <stdio.h>

typedef struct complex{
	double real, imag;
}Complex;

Complex CreateComplex(double a, double b){
	Complex c;
	c.real = a;
	c.imag = b;
	return c;
}

Complex CompAdd(Complex a, Complex b){
	Complex c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c;
}

Complex CompSub(Complex a, Complex b){
	Complex c;
	c.real = a.real - b.real;
	c.imag = a.imag - b.imag;
	return c;
}

Complex CompMul(Complex a, Complex b){
	Complex c;
	c.real = a.real * b.real - a.imag * b.imag;
	c.imag = a.real * b.imag + a.imag * b.real;
	return c;
}

Complex CompDiv(Complex a, Complex b){
	Complex c;
	Complex b1;
	b1.real = b.real;
	b1.imag = -1 * b.imag;
	c.real = (CompMul(a, b1).real / (b.real*b.real+b.imag*b.imag));
	c.imag = (CompMul(a, b1).imag / (b.real*b.real+b.imag*b.imag));
	return c;
}

void PrintComplex(Complex a){
	if(a.imag >= 0) printf("%.2f+%.2fi\n", a.real, a.imag);
	else printf("%.2f-%.2fi\n", a.real, -1 * a.imag);
}

