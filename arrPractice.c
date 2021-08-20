#include <stdio.h>

int main(void) {
	int dim2[5][5];
	for(int ld=0;ld<5;ld++) {
		for(int ldd=0;ldd<5;ldd++) {
			dim2[ld][ldd] = ld+ldd;
			//printf("%i\n", dim2[ld][ldd]);
		}
	}
	//printf("\n%p\n",dim2); 
	int dim3[4];
	dim3[2] = 10;
	printf("%i\n", dim3[2]);
	printf("%i\n", dim3[1]);
	dim3[1] = 4;
	printf("%i\n", dim3[1]);
	printf("%i\n", dim3[2]);
	printf("%i\n", dim3[0]);
	dim3[0] = 8;
	printf("%i\n", dim3[0]);
}
