// Nim game (leet code)
#include <stdio.h>
int divisorGame(int n) {
    return n % 2 == 0;
}
int main() {
    int n;
    printf("Enter value: ");
    scanf("%d", &n);
    if (divisorGame(n))
        printf("Alice wins\n");
    else
        printf("Bob wins\n");
    return 0;
}