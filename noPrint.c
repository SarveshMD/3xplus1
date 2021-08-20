#include <stdio.h>

int main(void) {
	long int num, n;
	num = 10;
	long int arr[num+0][100];
	n = 0;
	while (n < num) {
		n++;
		long int i, temp;
		i = n+0;
		temp = 0;
		// printf("\n\nn: %ld\n", n);
		while (i!=1) {
			if (i%2==0) {
				i= i/2;
			}
			else if (i%2==1.0) {
				i = (3*i)+1;
			}
			temp++;
			//printf("i: %ld\n", i);
			arr[n-1][temp] = i+0;
		}
		arr[n-1][0] = temp;
	}
	printf("Program exited successfully....\n");
	for(int l1 = 0;l1<num;l1++) {
		//printf("l1: %d\n", l1);
		printf("\narr[%d][0] = %ld\nNUM: %d\n", l1, arr[l1][0], l1+1);
		for(int l2 = 0; l2<arr[l1][0]; l2++) {
			//printf("l2: %d\n", l2);
			printf("arr[%d][%d] = %ld\n", l1, l2+1, arr[l1][l2+1]);
		}
	}
}

