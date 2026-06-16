// code by vothien at 17 july 2026
// Đề bài: Viết chương trình cho phép người dùng nhập vào một số thực bất kì từ bàn phím sau đó tính toán 


#include<stdio.h>
#include<math.h>

int main (){
    
    float x, a;
    a = sqrt(x);
    printf("Nhap vao so thuc x: "); scanf("%f", &x);

    // câu a: in ra giá trị a bình phương và căn bậc 2 của a
    printf("x binh phuong: %0.2f", x*x);
    printf("\n");
    printf("can bac 2 cua x: %0.2f", a);
    printf("\n");
    // câu b: tính giá trị của hàm fx

    if ( x < 0 ){
        float b = fabs(x);
        printf("Gia tri tuyet doi cua x: %0.2f", b);
    } else if (x > 0){
        float c = log(x);
        printf("Gia tri ln(%0.2f): %0.2f", x, c);
    } else{
        printf("f(x) = 0");
    }

    printf("\n");

    // câu c: tính giá trị của hàm fx

    float d = (exp(fabs(x)) + log(x) / log(5.0)) / (pow(3.0, x) + 1.0);
    printf("Gia trị cua ham fx la: %0.2f", d);
    printf("\n");
    
    // câu d: tính sin(x) và cos(x)

    printf("Gia tri sin(%0.2f) = %0.2f", x, sin(x));
    printf("\n");
    printf("Gia tri cos(%0.2f) = %0.2f", x, cos(x));
    
    return 0;
}