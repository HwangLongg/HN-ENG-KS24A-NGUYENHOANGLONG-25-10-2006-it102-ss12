#include <stdio.h>
int main (){
int n ,m ;
printf ("moi nhap vao so luong phan tu");
scanf ("%d",&m);
int arr[m];
printf ("moi nhap vao tung phan tu");
for (int i = 0;i<m;i++){
    scanf ("%d",&arr[i]);
    printf ("%d",arr[i]);
}
}