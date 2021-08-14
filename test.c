#include <stdio.h>

int main(void) {
int i, temp;
i = 113383;
temp = 1;
printf("{");
while (i!=1) {
	if (i%2==0) {
		i=i/2;
	}
	else if (i%2==1) {
		i = (3*i)+1;
	}
	printf("\"%i\": %i, ",temp,i);
	temp++;
	if (temp > 1000) {
		printf("temp > 1000\n");
		break;
	}
}
printf("}\n");
}

