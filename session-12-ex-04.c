#include <stdio.h>

int timMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;

    printf("Mời nhập vào số lượng phần tử: ");
    scanf("%d", &n);

    int arr[n];
    printf("Mời nhập vào các phần tử:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = timMax(arr, n);
    printf("Số lớn nhất là: %d\n", max);

    return 0;
}
