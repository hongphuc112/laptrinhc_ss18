#include <stdio.h>
struct SinhVien{
	char codeId[20];
	char fullName[50];
	char address[100];
	char phoneNumber[15];
	int age;
};
int main(){
	struct SinhVien sv1={"ABCD265","HongPhuc","Hanoi","0977",20};
	printf("ten sinh vien la : %s ",sv1.fullName);
	printf("so dien thoai : %s", sv1.phoneNumber);
	printf("so tuoi sinh vien : %s",sv1.age);
	return 0;
}
