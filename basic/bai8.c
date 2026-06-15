// code by vothien at 15 july 2026
// Đề bài: Viết chương trình tìm ước số chung lớn nhất của 2 số nguyên dương a va b
#include <stdio.h>

int main  (){
    int a, b, u, m, n;

    printf("Nhap vao a: "); scanf("%d", &a); m = a;
    printf("Nhap vao b: "); scanf("%d", &b); n = b;

    u = a%b;
    while (u!=0){
        a = b;
        b = u;
        u = a%b;
    }

    printf("USCLN (%d, %d) = %d", m, n, b);

    return 0;
}

// Giải thích: ví dụ a = 18 b = 30, bước đầu tiên chia lấy dư, 18%30 sẽ có kết quả bằng 0 và dư 18
// 18 ở đây chính là u, khi vao vòng while thi ta xet dieu kien u khac 0 nên vào vòng lặp
// a = b tức là lúc này a sẽ = 30, b = u là 18 và, và cứ thế lấy a % b cho đến khi nào số dư = 0 
// và số chia cuối cùng có nghĩa đó chính là b cuối sau khi thoát khỏi vòng lặp chính là thứ chúng ta cần
