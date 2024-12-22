#include <stdio.h>
#include <string.h>

int main() {
    char password[20] = "abc123";  // Mat khau cho truoc
    char input[20];

    // Yeu cau nguoi dung nhap mat khau
    printf("Nhap mat khau: ");
    scanf("%s", input);

    // Kiem tra mat khau
    if (strcmp(password, input) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Sai mat khau!\n");
    }

    return 0;
}