#include <stdio.h>

int main(void) {
	int num, n;
	scanf("Enter a number: \n", %num);
	n = 0;
	while (n < num) {
		n++;
		int nums[100000], temp, i;
		i = n+0;
		temp = 0;
		while (i!=1) {
			if (i%2==0) {
				i/=2;
			}
			else if (i%2==1) {
				i = (3*i)+1;
			}
			nums[temp] = i+0;
			temp++;
		}
	        printf("%i: %i\n",n,temp);
		printf("[");
		int reached = 0;
		for (int x=0;x<temp;x++) {
			if (nums[x] == 4) {
				reached = 1;
			}
			if (reached) {
				printf("%d, ",nums[x]);
			}
		}
		printf("\b\b]\n\n");
	}
}

