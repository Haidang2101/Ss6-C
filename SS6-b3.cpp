#include <stdio.h>

int main() {
    char password[20] = "5969"; 
    char input[20];             
    int i;                      
    int test = 1;           

    printf("Nhap mat khau: ");
    scanf("%s", input);

    for (i = 0; password[i] != '\0' || input[i] != '\0'; i++) {
        if (password[i] != input[i]) {
            test = 0; 
            break;
        }
    }

    if (test) {
        printf(" Dang nhap thanh cong!\n");
    } else {
        printf("Sai mat khau.\n");
    }

    return 0;
}

