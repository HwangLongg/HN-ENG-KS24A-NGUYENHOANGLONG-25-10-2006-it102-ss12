#include <stdio.h>
int main (){
    int n ,m ;
    printf ("moi nhap vao 2 so nguyen to ");
    scanf ("%d",&n);
    scanf ("%d",&m);
    if ( n >= 0){
        printf ("%d la so nguyen to\n",n);
    }
    else {
        printf ("%d khong phai so nguyen to\n ",n);
    }
    if (m >= 0){
         printf ("%d la so nguyen to\n ",m);
    }
    else {
        printf ("%d khong phai so nguyen to\n ",m);
    }
    return 0;
}