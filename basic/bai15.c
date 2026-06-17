// code by vothien at july 2026

// Đề bài: Luyện tập mảng 2 chiều

#include <stdio.h>

int main (){

    int m, n;
    int a[10][10];
    int sum = 0;
    float tbc = 0;

    printf("Nhap so hang: "); scanf("%d", &m);
    printf("Nhap so cot: "); scanf("%d", &n);

    printf("Nhap gia tri cua mang! \n");
    for (int i = 0 ; i < m ; i ++){

        for ( int j = 0 ; j < n ; j ++){
            printf("Nhap vao phan tu thu [%d] [%d] la: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // hien thi mang

    for (int i = 0 ; i < m ; i ++){

        for ( int j = 0 ; j < n ; j ++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    // cau a:tính tổng các phần tử trong mảngs

    for (int i = 0 ; i < m ; i ++){

        for ( int j = 0 ; j < n ; j ++){
           sum += a[i][j];
        }
    }
    tbc = (float) sum / (m*n);
    printf("Tong cua cac phan tu trong mang la: %d \n", sum);
    printf("Trung binh cong cua cac phan tu trong mang la: %0.2f \n", tbc);

    // cau b tim gia tri nho nhat

    int min = a[0][0];

    for (int i = 0 ; i < m ; i ++){
        for ( int j = 0 ; j < n ; j ++){
           if ( min > a[i][j]){
                min = a[i][j];
           }
        }
    }

    printf("Gia tri nho nhat trong mang la: %d \n", min);
    return 0;
}