#include <stdio.h>

int main(void) {
	int num, n;
	printf("Enter a number: \n");
	scanf("%i", &num);
	n = 0;
	while (n < num) {
		n++;
		int nums[1000000], temp, i;
		i = n+0;
		temp = 0;
		int run = 1;
		while (i!=1) {
			if (i%2==0) {
				i/=2;
			}
			else if (i%2==1) {
				i = (3*i)+1;
			}
			/*printf("Temp: %i\n", temp);*/
			nums[temp] = i+0;
			temp++;
			/*if (temp >= 1000000) {
				run = 0;
				printf("Temp greaterthan or equalto 100000"); 
				break;
			}*/
		}
		if (!run) {
			printf("Run is 0");
			break;
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

