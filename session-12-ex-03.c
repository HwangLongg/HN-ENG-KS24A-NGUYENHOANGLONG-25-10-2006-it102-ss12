#include <stdio.h>
int main (){
    int n , sum ;
    printf ("moi nhap vao so bst ky");
    scanf ("%d",&n);
    for (int i = n ; i >= 1 ; i--){
        sum *= i;
    }
    printf ("giai thua cua %d la %d ",n,sum);
    return 0;
}