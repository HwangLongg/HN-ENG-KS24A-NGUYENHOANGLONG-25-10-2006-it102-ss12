#include <stdio.h>
int main (){
    int n , max  ;
    printf ("moi nhap vao so luong phan tu");
    scanf ("%d",&n);
    int arr[n];
    for ( int i = 0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    for (int i = 0;i <n ; i++){
        if ( max < arr[i]){
            max = arr[i] ;
        }

    }
    printf ("so lon nhat la %d ",max);
    return 0;
}