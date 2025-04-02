#include <stdio.h>
#include <stdlib.h>

double calculateOperation(double (*operation)(double, double), double number1, double number2){
    return operation(number1, number2);
}

double mnoz(double n1, double n2){
    return n1*n2;
}

int main()
{
    printf("%lf", calculateOperation(mnoz, 10.5, 2.5));
    return 0;
}
