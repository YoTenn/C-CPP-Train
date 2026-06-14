// code by vothien at 14 july 2026
// Đề bài: Viết chương trình cho phép người dùng nhập vào tháng, năm, sau đó in ra số ngày trong tháng đó
// để biết tháng 2 năm đó bao nhiêu ngày ( nhuận hay không nhuận )
// cách tính năm nhuận : năm nhuận là năm chia hết cho 4 và không chia hết 100
#include <stdio.h>

int main (){
    int thang, nam;

    printf("Nhap vao thang: "); scanf("%d", &thang);
    printf("Nhap vao nam: "); scanf("%d", &nam);

    switch (thang)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang co 30 ngay");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang co 31 ngay");
            break;
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
                printf("Thang co 29 ngay");
            }else {
                printf("Thang co 28 ngay");
            }
        default:
            break;
    }

    return 0;

}