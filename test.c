#include <stdio.h>

int main(void) {
double i;
int temp;
i = 113383.0;
temp = 1;
printf("{");
while (i!=1.0) {
	if (i%2.0==0) {
		i=i/2.0;
	}
	else if (i%2.0==1.0) {
		i = (3.0*i)+1.0;
	}
	printf("\"%d\": %lf, ",temp,i);
	temp++;
	/*if (temp > 1000) {
		printf("temp > 1000\n");
		break;
	}*/
}
printf("}\n");
}

