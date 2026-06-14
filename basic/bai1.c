// Võ Thiện
// C basic train
// 11 july 2026


// Lesson 1: Constant, variable

// A constant is a quantity whose value does not change dugring the calculation process of the program 
// The value of the constant must be determined at the time of declaration

// determined at the time: xác định tại thời điểm

// A variable is a quantity defined by the programmer, named through variable declaration
// use to store data , the value of the variable can change during the execution of the program

// execution of the program: thực thi chuownwng trình

#include <stdio.h> // khai báo tệp tiêu đề của thư viện chứa hàm đó
// include "ten_tep"  đây là cách khai báo cho thư viện mà mình tự build

// there are have 2 ways to declare ( khai báo ) constant

// way 1 :

# define PI 3.1416

// way 2 :

const float PI2 = 3.1416;
// khai báo nguyên mẫu hàm
int tinhCV (int a, int b, int c);

// chương trình chính
int main() {

    unsigned char a = 8;
    unsigned char b = 5;
    
    unsigned char c = 0;

    c = a & b;
    // %d và %i =  in ra dưới dạng số nguyên có dấu ( hệ 10 )
    // %u in ra dưới dạng số nguyên không dấu
    
    printf("The value of c: %u", c);
    return 0;
    
}

// dinh nghia ham
int tinhCV ( int a, int b, int c){

}
// 