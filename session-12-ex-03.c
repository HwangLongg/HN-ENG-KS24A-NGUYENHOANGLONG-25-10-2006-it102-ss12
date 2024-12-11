#include <stdio.h>

int tinhGiaiThua(int n) {
    int sum = 1;
    for (int i = n; i >= 1; i--) {
        sum *= i;
    }
    return sum;
}

int main() {
    int n;

    printf("Mời nhập vào số bất kỳ: ");
    scanf("%d", &n);

    int giaiThua = tinhGiaiThua(n);

    printf("Giai thừa của %d là %d\n", n, giaiThua);

    return 0;
}
