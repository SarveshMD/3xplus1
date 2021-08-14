#include <stdio.h>

int main(void) {
int i, temp;
i = 113383;
temp = 0;
while (i!=1) {
	if (i%2==0) {
		i=i/2;
	}
	else if (i%2==1) {
		i = (3*i)+1;
	}
	/*printf("Temp: %i\n", temp);*/
/*	nums[temp] = i+0;*/
	printf("i: %i\ntemp: %i\n",i, temp);
	temp++;
	if (temp >= 1000) {
		printf("Temp greaterthan or equalto 100000\n");
		break;
	}
}
}

