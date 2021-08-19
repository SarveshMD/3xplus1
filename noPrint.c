#include <stdio.h>

int main(void) {
	long int num, n;
	num = 100000000;
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
	}
	printf("Program exited successfully....\n");
}

