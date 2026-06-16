// code by vothien at 17 july 2026
// Đề bài: Viết chương trình nhập 1 số nguyên từ bàn phím và kiểm tra xem số đó có phải số chính phương không

#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    if (n < 0) {
        printf("%d khong phai so chinh phuong.\n", n);
    } else if (n == 0) {
        printf("0 la so chinh phuong.\n");
    } else {
        int so_le = 1;
        int tam = n; 

      
        while (tam > 0) {
            tam = tam - so_le;
            so_le = so_le + 2; 
        }

        if (tam == 0) {
            printf("%d la so chinh phuong.\n", n);
        } else {
            printf("%d khong phai so chinh phuong.\n", n);
        }
    }
    return 0;
}