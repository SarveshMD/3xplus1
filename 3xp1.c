#include <stdio.h>
#include <math.h>

int main(void) {
	long int num, n;
	// printf("Enter a number: \n");
	// scanf("%i", &num);
	num = 10;
	n = 0;
	while (n < num) {
		n++;
		int temp;
		long int nums[1000000], i;
		i = n+0.0;
		temp = 0.0;
		while (i!=1.0) {
			if (fmod(i,2.0)==0.0) {
				i= i/2.0;
			}
			else if (fmod(i,2.0)==1.0) {
				i = (3.0*i)+1.0;
			}
			nums[temp] = i+0.0;
			temp++;
		}
		printf("%.0ld: %i\n",n,temp);
		printf("[");
		int reached = 0;
		for (int x=0;x<temp;x++) {
			if (nums[x] == 4.0 || nums[x] == 2.0 || nums[x] == 1.0) {
				reached = 1;
			}
			if (reached) {
				printf("%.0ld, ",nums[x]);
			}
		}
		printf("\b\b]\n\n");
	}
}

