// đề bài: nhập 3 số a,b,c tương ứng với 3 cạnh của tam giác, kiểm tra xem 3 cạnh đó có thỏa mãn hình thành nên 1 tam giác hay không
// nếu không thỏa mãn thì in ra màn hình thông báo không đủ điều kiện 
// nếu thỏa mãn thì tính chu vi và diện tích của tam giác đó

// điều kiện để là 3 cạnh của 1 tam giác là tổng 2 cạnh bất kì phải lớn hơn cạnh còn lại
// code by vothien 14 july 2026
#include <stdio.h>
#include <math.h>

int main (){
    int a,b,c,cv;
    float p, dt;

    // nhap vao 3 so nguyen
    printf("Nhap canh a: "); scanf("%d", &a);
    printf("Nhap canh b: "); scanf("%d", &b);
    printf("Nhap canh c: "); scanf("%d", &c);

    // kiem tra xem co du dieu kien khong
    if (a+b < c || a+c < b || c+b < a){
        // không đủ điều kiện
        printf("khong thoa man dieu kien la 3 canh cua tam giac");
    }else {
        //đủ điều kiện
        cv = a + b + c;
        p = cv / 2;
        dt = sqrt(p*(p-a)*(p-b)*(p-c));

        printf("Voi 3 canh a: %d, b: %d, c: %d", a,b,c);
        printf("\n");
        printf("Chu vi la: %d", cv);
        printf("\n");
        printf("Dien tich la: %0.2f", dt);
    }
    return 0;
}