#include <stdio.h>

int main(void) {
	long int num, n;
	printf("Enter a number: \n");
	scanf("%ld", &num);
	printf("\n");
	long int arr[num+0][5]; // This line needs a lot of memory, so blows up.
	n = 0;
	printf("Crunching the numbers...\n");
	while (n < num) {
		n++;
		long int i, temp;
		i = n+0;
		temp = 0;
		int ready = 0;
		int prev = i+0;
		int noar;
		while (prev!=1) {
			if ((!ready) && (i<=4) && (i!=3)) {
				ready = 1;
				noar = 1;
			}
			if (ready) {
				arr[n-1][(++noar)] = i+0;
			}
			prev = i+0;
			if (i%2==0) {
				i= i/2;
			}
			else if (i%2==1.0) {
				i = (3*i)+1;
			}
			temp++;
		}
		if(i==1) {
			temp = 1;
			noar = 2;
			arr[n-1][2] = 1;
		}
		arr[n-1][0] = temp-1;
		arr[n-1][1] = noar-1;
	}
	printf("Calculation Completed Successfully...\n");
	for(int l1 = 0;l1<num;l1++) {
		printf("\n%d: %ld\n[", l1+1, arr[l1][0]);
		for(int l2=0;l2<arr[l1][1];l2++) {
			printf("%ld, ", arr[l1][l2+2]);
		}
		printf("\b\b]\n");
	}
}

