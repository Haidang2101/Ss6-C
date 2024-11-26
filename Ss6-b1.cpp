#include <stdio.h>

int main() {
    int number;       
    int Tong = 0; // tong cua các so le
    int i;          

    printf("Hay nhap 5 so nguyen:\n");
    for (i = 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            Tong += number;
        }
    }

    printf("Tong cac so le la: %d\n", Tong);

    return 0;
}

