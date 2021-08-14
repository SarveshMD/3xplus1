#include <stdio.h>

int main(void) {
	int num, n;
	num = 150;
	n = 0;
	while (n < num) {
		n++;
		int nums[1000], temp, i;
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
		for (int x=0;x<temp;x++) {
			printf("%d, ",nums[x]);
		}
		printf("\b\b]\n\n");
	}
}

