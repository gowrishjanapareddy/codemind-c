#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sumofsquares = 0;
    int squareofsum = 0;
    for (int i = 1; i <= n; i++) {
        sumofsquares += i * i;
        squareofsum += i;
    }
    squareofsum *= squareofsum;
    int difference =squareofsum - sumofsquares;
    printf("%d", difference);
    return 0;
}