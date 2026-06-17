// code by vothien at 17 july 2026
// Đề bài:

#include <stdio.h>

int main (){
    int n, m, s, k , y, q;

    printf("Nhap vao so phan tu cua mang: "); scanf("%d", &n);
    int a[10];
    
    printf("nhap vao mang: \n");

    for ( int i = 0; i < n ; i++){
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    // hien thi mang
    for ( int i = 0; i < n ; i ++){
        printf("%d\t", a[i]);
    }
    printf("\n");


    // cau a
    do {
        printf("Nhap vao vi tri can chen: "); scanf("%d", &m);
    } while (m > n || m < 0);
    printf("Nhap vao gia tri can chen: "); scanf("%d", &s);

    for ( int i = n ; i >= m ; i --){
        a[i] = a[i-1];
    }

    a[m-1] = s;
    n++;

    // mag sau khi chen

    for ( int i = 0; i < n ; i ++){
        printf("%d\t", a[i]);
    }

    printf("\n");

    // cau b
    
    do {
        printf("Nhap vao vi tri can sua: "); scanf("%d", &k);
    } while (k > n || k < 0);
    printf("Nhap vao gia tri can sua: "); scanf("%d", &y);

    a[k-1] = y;

    for ( int i = 0; i < n ; i ++){
        printf("%d\t", a[i]);
    }
    
    // cau c 
    printf("\n");

    do {
        printf("Nhap vao vi tri can xoa: "); scanf("%d", &q);
    } while (q > n || q < 0);

    for ( int i = q-1 ; i < n - 1; i ++){
        a[i] = a[i+1];
    }
    n --;

    for ( int i = 0; i < n ; i ++){
        printf("%d\t", a[i]);
    }
    
    return 0;
}