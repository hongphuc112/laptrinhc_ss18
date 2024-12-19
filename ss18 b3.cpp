#include <stdio.h>
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct SinhVien sv[5];
    for (int i = 0; i < 5; i++) {
        printf("thong tin sinh vien %d:\n", i + 1);
        printf("ten sinh vien : ");
        fflush(stdin);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        printf("tuoi sinh vien: ");
        scanf("%d", &sv[i].age);
        printf("so dien thoai: ");
        scanf("%s", sv[i].phoneNumber);
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("sinh vien thu %d:\n", i + 1);
        printf("ten: %s", sv[i].name);
        printf("tuoi: %d\n", sv[i].age);
        printf("so dien thoai: %s\n", sv[i].phoneNumber);
    }
    return 0;
}

