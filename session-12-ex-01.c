#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int n, m, sum;
    printf("Mời nhập vào 2 số bất kỳ: ");
    scanf("%d", &n);
    scanf("%d", &m);
    
    sum = tinhTong(n, m); 

    printf("Tổng 2 số được nhập là: %d\n", sum);

    return 0;
}
