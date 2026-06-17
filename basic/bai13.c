// code by vothien at 17 july 2026
// Đề bài: Viết chương trình cho phép người dùng nhập vào từ bàn phím một dãy số nguyên a1 - an
// a) tính tổng, trung bình cộng các phần tử của dãy
// b) Đếm số phần tử chẵn trong dãy, in ra giá trị và vị trí của những phần tử đó
// c) Tìm giá trị lớn nhất của dãy số, in ra giá trị lớn nhất của dãy 
// d) Tính tổng và trung bình cộng của các phần tử tại vị trí chẵn trong dãy
// e) nhap vao so nguyen x, sau do tìm giá trị bằng x trong mảng

#include <stdio.h>

int main () {
    int n, x;
    int s = 0; 
    float tbc = 0;
    int count_chan = 0;
    int sum = 0, count = 0;
    float tbc2 = 0;


    printf("Nhap vao so phan tu cua mang: "); scanf("%d", &n);
    int a[n];
    
    printf("nhap vao mang: \n");

    for ( int i = 0; i < n ; i++){
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }

    // cau a
    for ( int i = 0 ; i < n; i++){
        s += a[i];
        if (a[i] % 2 == 0){
            count_chan += 1;
        }
    }
    printf("Tong cua mang la: %d", s);
    
    printf("\n");

    tbc = (float) s / n;

    printf("Trung binh cong cua mang la: %0.2f", tbc);

    printf("\n");

    // cau b
    if (count_chan != 0){
        printf("Co %d so chan trong mang: \n", count_chan);
        for ( int i = 0 ; i < n ; i ++){
                if (a[i] % 2 == 0){
                    printf("Gia tri: %d, Vi tri: a[%d]", a[i], i);
                    printf("\n");
                }
            }   
    }else {
        printf("Co %d so chan trong mang: \n", count_chan);
    }

    // cau c
    int max = a[0];
    for ( int i = 1 ; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }

    printf("Gia tri lon nhat trong mang la: %d", max);
    printf("\n");

    // cau d
    
    for ( int i = 0 ; i < n; i++){
        if (i % 2 == 0){
            sum += a[i];
            count += 1;
        }
    }

    tbc2 = (float) sum / count;
    printf("So co vi tri chan trong mang la: %d", count);
    printf("\n");
    printf("Tong so co vi tri chan trong mang: %d", sum);
    printf("\n");
    printf("Trung binh cong so co vi tri chan trong mang: %0.2f", tbc2);
    printf("\n");
    
    // cau e 

    printf("Nhap vao so nguyen x: "); scanf("%d", &x);
    int check = 0;
    for ( int i = 0 ; i < n; i++){
       if (a[i] == x){
            printf("Gia tri a[%d] = x = %d \n", i, a[i]);
            check = 1;
       }
    }
    if (check == 0){
        printf("Khong tim thay x trong mang");
    }
    
    return 0;
}