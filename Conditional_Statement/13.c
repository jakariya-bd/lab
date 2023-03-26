#include <stdio.h>

int main(void)
{
    int t; // temperature in centigrade
    scanf("%d", &t);

    if( t < 0 ) printf("Freezing weather");
    else if( t < 10 ) printf("Very Cold weather");
    else if( t < 20 ) printf("Cold weather");
    else if( t < 30 ) printf("Normal in Temp");
    else if( t < 40 ) printf("Its Hot");
    else printf("Its Very Hot");

    printf(".\n");

    return 0;
}
