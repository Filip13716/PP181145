#include <stdio.h>
#include <stdlib.h>

calculateGeometricSequenceRecursively(n,d){
    if(n==1) return 1;
    return calculateGeometricSequenceRecursively(n-1,d)*d;
}

int main()
{
    printf("%d\n", calculateGeometricSequenceRecursively(1,-4));
    printf("%d\n", calculateGeometricSequenceRecursively(2,-4));
    printf("%d\n", calculateGeometricSequenceRecursively(3,-4));
    printf("%d\n", calculateGeometricSequenceRecursively(4,-4));
    printf("%d\n", calculateGeometricSequenceRecursively(5,-4));

    return 0;
}
