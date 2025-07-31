#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature of %f Celsius in Fahrenheit is %f\n", celsius, fahrenheit);
    return 0;
}
