#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 3;
    int b = -3;

    int c = abs(a * b);

    printf("%d %d\n", a, b);
    printf("%d", c);
}