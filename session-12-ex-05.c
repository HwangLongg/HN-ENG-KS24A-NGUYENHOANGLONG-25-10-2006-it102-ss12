#include <stdio.h>

int kiemTraSoNguyenTo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;

    printf("Mời nhập vào 2 số nguyên: ");
    scanf("%d", &n);
    scanf("%d", &m);

    if (kiemTraSoNguyenTo(n)) {
        printf("%d là số nguyên tố\n", n);
    } else {
        printf("%d không phải số nguyên tố\n", n);
    }

    if (kiemTraSoNguyenTo(m)) {
        printf("%d là số nguyên tố\n", m);
    } else {
        printf("%d không phải số nguyên tố\n", m);
    }

    return 0;
}
