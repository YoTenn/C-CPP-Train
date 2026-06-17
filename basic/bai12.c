// code by vothien at 17 july 2026
// Đề bài: 
#include <stdio.h>

int main () {

    int k;
    float s = 0;

    printf("Nhap vao so k: "); scanf("%d", &k);

    for ( int i = 1; i <= k; i++)
    {
        s += 1.0 / (2 * i); 
    }

    printf("ket qua cua tong s la : %0.2f", s);


    return 0;
}