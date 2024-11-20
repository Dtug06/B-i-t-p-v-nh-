#include<stdio.h>
int main(){
	float pi=3.14;
	float R;
	printf("nhap ban kinh hinh tron");
	scanf("%f",&R);
	float peremeter=2*R*pi;
	float area=pi*R*R;
	printf("chu vi hinh tron la:%f",peremeter);
	printf("dien tich hinh tron la:%f",area);
	
	return 0;
	
}
