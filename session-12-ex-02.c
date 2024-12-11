#include <stdio.h>

int nhapMang(int arr[], int m) {
    printf("Mời nhập vào từng phần tử của mảng:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    return 0;
}

int inMang(int arr[], int m) {
    printf("Mảng bạn vừa nhập là:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    int m;

    printf("Mời nhập vào số lượng phần tử trong mảng: ");
    scanf("%d", &m);

    int arr[m];

    nhapMang(arr, m);
    inMang(arr, m);

    return 0;
}
