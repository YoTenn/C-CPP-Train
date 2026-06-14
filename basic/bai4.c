#include <stdio.h>
// đề bài: nhập vào 3 số nguyên a,b,c, tính trung bình cộng của 3 số nguyên đó
int main (){
    int a,b,c;

    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d", &b);
    printf("Nhap vao so nguyen c: ");
    scanf("%d", &c);

    float tbc = 1.0*(a + b + c)/3;

    printf("Trung binh cong cua 3 so nguyen %d, %d, %d la: %d", a,b,c,tbc);


    return 0;
}