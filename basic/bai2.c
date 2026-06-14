#include <stdio.h>

int main (){
    int a, b, s;

    printf("Enter value for a: ");
    scanf("%d", &a);// &a địa chỉ của biến a
    printf("Enter value for b: ");
    scanf("%d", &b);

    s = a + b;

    printf("Total of %d and %d is: %d", a, b, s);

    return 0;
}