#include <stdio.h>

int isPerfect(int n) {
    if (n <= 0) {
        return 0;
    }

    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int num1, num2;

    printf("Nhập số nguyên thứ nhất: ");
    scanf("%d", &num1);
    printf("Nhập số nguyên thứ hai: ");
    scanf("%d", &num2);

    if (isPerfect(num1)) {
        printf("%d là số hoàn hảo.\n", num1);
    } else {
        printf("%d không phải là số hoàn hảo.\n", num1);
    }

    if (isPerfect(num2)) {
        printf("%d là số hoàn hảo.\n", num2);
    } else {
        printf("%d không phải là số hoàn hảo.\n", num2);
    }

    return 0;
}
