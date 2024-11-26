#include <stdio.h>

int main() {
    int number;   
    int even = 0; // so chan
    int odd = 0;   // so le
    int i;             

    printf("Nhap 5 so nguyen:\n");
    for (i = 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
             even++; 
        } else {
             odd++;  
        }
    }

    printf("So luong so chan: %d\n", even);
    printf("So luong so le: %d\n", odd);

    return 0;
}

