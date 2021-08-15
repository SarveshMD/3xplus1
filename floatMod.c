#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    double value1, value2;
    double result;

    /* Assign the values we will find the fmod of */
    value1 = 1.6;
    value2 = 1.2;

    /* Calculate the remainder of value1 / value2 */
    result = fmod(value1, value2);

    /* Display the result of the calculation */
    printf("The fmod of %f and %f is %f\n", value1, value2, result);

    return 0;
}
