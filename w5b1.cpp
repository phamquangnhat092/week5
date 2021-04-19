#include<stdio.h>
main() {
	int x;
	float y;
	printf("Nhap so km can chuyen doi:\n");
	scanf("%d", &x);
	y=x/1.609;
	printf("%d km tuong duong %f dam", x,y);
	return 0;
	
}
