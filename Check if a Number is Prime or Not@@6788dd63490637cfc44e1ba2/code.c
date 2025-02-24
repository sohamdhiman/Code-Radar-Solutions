#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}