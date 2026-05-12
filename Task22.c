#include <stdio.h>
int smallestEvenMultiple(int n)
{
    return (n % 2 == 0) ? n : 2 * n;
}
int main() 
{
    int n;
    scanf("%d", &n);
    printf("%d", smallestEvenMultiple(n));
    return 0;
}