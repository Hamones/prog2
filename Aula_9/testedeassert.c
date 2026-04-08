#include <stdio.h>
#include <assert.h>
/* para cada função deve ter uma função assert
 * /
 *
 */

int main (){
	int i;
	for (i= 3;i <= 10; i++) {
		assert(i <= 7);
		printf("i = %d\n", i);
	}
	return 0;
}
