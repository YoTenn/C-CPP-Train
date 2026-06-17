//code by vothien at 17 july 2026

// Đề bài: Thực hành xâu, chuỗi ký tự

#include <stdio.h>
#include <string.h>

int main () {

    char a[31];
    int n;
    int dem = 0;

    printf("Nhap vao ho ten: ");
    fflush(stdin);
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    n = strlen(a);

    for ( int i = 0 ; i < n ; i++){
        printf("Ky tu thu %d la: %c", i+1, a[i] );
        printf("\n");
    }

    printf("Ho ten vua nhap la: %s \n", a);

    // kiem tra xem ky tu xuat hien may lan trong xau da nhap

    char kytu = 'e';

    for (int i = 0; i < n; i++){
        if (kytu == a[i]){
            dem ++;
        }
    }

    printf("ky tu %c xuat hien %d lan!", kytu, dem);

    return 0;
}