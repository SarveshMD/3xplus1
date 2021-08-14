#include <stdio.h>

int main(void) {
	int num, n;
	num = 150;
	n = 0;
	while (n < num) {
		n++;
		int nums[1000000], temp, i;
		i = n+0;
		temp = 0;
		while (i!=1) {
			if (i%2==0) {
				i/=2;
			}
			else if (i%2==1) {
				i = (3*i)+1;
			}
			nums[temp] = i;
			temp++;
		}
		printf("%i: %i\n",n,temp);
		for (int x=temp+0-3;x>temp;x++) {
			printf("%i",nums[x]);
		}
	}
}
