#include <stdio.h>

int main(void) {
	long int num, n;
	num = 100;
	long int arr[num+0][10000];
	n = 0;
	printf("Crunching the numbers...\n");
	while (n < num) {
		n++;
		long int i, temp;
		i = n+0;
		temp = 0;
		arr[n-1][temp+1] = i+0;
		while (i!=1) {
			if (i%2==0) {
				i= i/2;
			}
			else if (i%2==1.0) {
				i = (3*i)+1;
			}
			temp++;
			arr[n-1][temp+1] = i+0;
		}
		arr[n-1][0] = temp+1;
	}
	printf("Calculation Completed Successfully...\n");
	for(int l1 = 0;l1<num;l1++) {
		printf("\n%ld: %ld\n[", arr[l1][1], arr[l1][0]);
		int startFrom;
		if(arr[l1][0]>=3) {
			startFrom = arr[l1][0]-3;
		}
		else {
			startFrom = 0;
		}
		for(int l2 = startFrom; l2<arr[l1][0]; l2++) {
			printf("%ld, ", arr[l1][l2+1]);
		}
		printf("\b\b]\n");
	}
}

