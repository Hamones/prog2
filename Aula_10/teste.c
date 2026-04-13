#include <stdio.h>

void um (){
	printf("HW");
}
void dois (int a){
	printf("%d", a);
}

int main ()
{
void (*ponteiro1) ();

void (*ponteiro2) (int);

ponteiro1 = um;
ponteiro2 = dois;


ponteiro1();
ponteiro2();


	return 0;
}
