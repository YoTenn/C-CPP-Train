// code by vothien at 14 july 2026
// Đề bài:  Thực hành vòng lặp for

#include <stdio.h>

int main (){
    int n, s = 0;
    int gt = 1;
    printf("Nhap vao so n: "); scanf("%d", &n);


    for (int i = 1; i <= n ; i++){
        s+=i;
        gt*=i;
    }
    printf("Tong cac chu so la: %d", s);
    printf("Giai thua cua n la: %d", gt);
    return 0;
}