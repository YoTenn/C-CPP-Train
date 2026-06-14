#include <stdio.h>

// tính chu vi và diện tích của hình tròn
const float PI = 3.1416;
float binhphuong ( float a);

int main (){

    float r, cv, dt;

    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    cv = 2 * PI * r;
    dt = PI * binhphuong(r);

    printf("The premiter of the circle is: %0.2f", cv);
    printf("\n");
    printf("The area of the circle is: %0.2f", dt);
    return 0;
}

float binhphuong ( float a ){
    float bp;
    bp = a * a;
    return bp;
}