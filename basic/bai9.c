// code by vothien at 16 july 2026
// Đề bài: Viết chương trình cho phép nhập vào độ dài 3 cạnh, kiểm tra 3 cạnh có tạo thành 1 tam giác hay không
// nếu có thì tính chu vi và diện tích tam giác. 
// Nếu không thì thông báo cho phép người dùng nhập lại nếu muốn 

#include <stdio.h>
#include <math.h>


int main (){
    
    float a, b, c, cv, p, dt;
    int n = 1;
    do {
        printf("Nhap canh a: "); scanf("%f", &a);
        printf("Nhap canh b: "); scanf("%f", &b);
        printf("Nhap canh c: "); scanf("%f", &c);

        if (a + b > c && a + c > b && b + c > a){
            cv = a + b + c;
            p = cv / 2;
            dt = sqrt(p*(p-a)*(p-b)*(p-c));

            printf("Chu vi tam giac la: %0.2f", cv);
            printf("\nDien tich tam giac la: %0.2f", dt);
            printf("\n");
        }else {
            printf("Khong phai tam giac!!");
            printf("\nNhap lai 1 = ok, 0 = tu choi: "); scanf("%d", &n);
            printf("\n");
        }
    } while (n == 1);


    return 0;
}