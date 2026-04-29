#include <stdio.h>
#include <gsl/gsl_poly.h>

void imprimir(double  a, double  b){

	printf("inteiro a: %d\n",a);
	printf("inteiro b: %d\n",b);
};


int main (){
	double a;
	double b;
	gsl_complex c;

	scanf("%d", a);
	scanf("%d", b);
	
	imprimir (a,b);

	c = gsl_complex_rect(a);
	c = gsl_complex_rect(b);

	imprimir (a,b);


	return 0;
}
