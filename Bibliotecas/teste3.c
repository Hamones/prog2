#include <stdio.h>
#include <gsl/gsl_poly.h>
int main(void) {
double coefs[3] = {1.0, -3.0, 2.0};
double raizes[2];
int num_raizes;
num_raizes = gsl_poly_solve_quadratic(coefs[0],coefs[1], coefs[2], &raizes[0], &raizes[1]);
if (num_raizes == 2) {
printf("As raízes do polinômio são: %f e %f\n",raizes[0], raizes[1]);
} else if (num_raizes == 1) {
	printf("O polinômio possui uma única raiz real:%f\n", raizes[0]);
} else {
printf("O polinômio não possui raízes reais\n");
}
return 0;
}
