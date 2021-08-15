#include <stdio.h>
#include <math.h>

int main(void) {
long double i;
int temp;
i = 113383.0;
temp = 1;
printf("{");
while (i!=1.0) {
	if (fmod(i,2.0)==0) {
		i=i/2.0;
	}
	else if (fmod(i,2.0)==1.0) {
		i = (3.0*i)+1.0;
	}
	printf("\"%d\": %.0Lf, ",temp,i);
	temp++;
	/*if (temp > 1000) {
		printf("temp > 1000\n");
		break;
	}*/
}
printf("}\n");
}

