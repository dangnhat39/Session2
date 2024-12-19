#include <stdio.h>

int main() {
   
    const float PI = 3.14;

  
    float banKinh;


    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &banKinh);

   
    float chuVi = 2 * PI * banKinh;


    float dienTich = PI * banKinh * banKinh;

    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

