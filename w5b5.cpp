#include<stdio.h>
main(){
	int x, y;
	printf("Nhap 2 so bat ki:\n");
	scanf("%d%d", &x,&y);
	if (x>y){
		printf("x lon hon y");
	} else if (x<y){
		printf("x nho hon y");
	} else {
	printf("x bang y");
    }
    return 0;
	
}
