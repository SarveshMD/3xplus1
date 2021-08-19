#include <stdio.h>

int main(void) {
	long int num, n;
	printf("Enter a number: \n");
	scanf("%ld", &num);
	printf("\n\n");
	n = 0;
	while (n < num) {
		n++;
		int temp;
		long int nums[1000000], i;
		i = n+0;
		temp = 0;
		while (i!=1) {
			if (i%2==0) {
				i= i/2;
			}
			else if (i%2==1.0) {
				i = (3*i)+1;
			}
			nums[temp] = i+0;
			temp++;
		}
		printf("%ld: %i\n",n,temp);
		printf("[");
		int reached = 0;
		for (int x=0;x<temp;x++) {
			if (nums[x] == 4 || nums[x] == 2 || nums[x] == 1) {
				reached = 1;
			}
			if (reached) {
				printf("%ld, ",nums[x]);
			}
		}
		printf("\b\b]\n\n");
	}
}

