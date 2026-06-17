// code by vothien at 18 july 2026

// Đề bài: thực hành kiểu cấu trúc

#include <stdio.h>

// khai bao cau truc

struct PhanSo
{
    int TuSo, MauSo;
};

int main () {
    // Khai bao bien tu kieu phan so

    struct PhanSo ps;
    int a, b;

    printf("Nhap vao tu so: "); scanf("%d", &ps.TuSo);

    printf("Nhap vao mau so: "); scanf("%d", &ps.MauSo);

    // hien thi phan so chua rut gon

    printf("Phan so chua rut gon : %d / %d", ps.TuSo, ps.MauSo);

    // tim uoc so chung lon nhat cua ca tu va mau
    a = ps.TuSo;
    b = ps.MauSo;

    int r = a%b;

    while (r)
    {
        a = b;
        b = r;
        r= a%b;
    }

    ps.TuSo /= b;
    ps.MauSo /= b;

    printf("\nPhan so sau khi rut gon: %d / %d", ps.TuSo, ps.MauSo);
    


    

    return 0;
}