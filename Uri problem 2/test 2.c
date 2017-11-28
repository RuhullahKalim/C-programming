#include <stdio.h>
#include <math.h>
int main()
{
    double vrbl, result;
    vrbl = 5.5;
    result = log (vrbl);
    printf("ln(%lf) = %lf\n", vrbl, result );
    return 0;
}
