#include<stdio.h>
main(){
	int x, y,z;
	double t;
	printf("Nhap so hoc sinh can chia:\n");
	scanf("%d", &x);
	y=x/7;
	t= (double)x/7;
	z=x%7;
	if (z==0) {
		printf("Lop co hoc sinh it nhat la %d hoc sinh.\n",y);
	    printf("Lop co hoc sinh nhieu nhat la %d hoc sinh.\n",y);
	    printf("So hoc sinh trung binh la %d\n", y);
	    printf("So lop co so hoc sinh nhieu hon trung binh la 0\n");
	    printf("So lop co so hoc sinh it hon trung binh la 0\n");
	    printf("Cac lop co so hoc sinh bang nhau");
	    
	} else {
	printf("Lop co hoc sinh it nhat la %d hoc sinh.\n",y);
	printf("Lop co hoc sinh nhieu nhat la %d hoc sinh.\n",y+1);
	printf("So hoc sinh trung binh la %.2f\n", t);
	printf("So lop co so hoc sinh nhieu hon trung binh la %d\n", z);
	printf("So lop co so hoc sinh it hon trung binh la %d\n", 7-z);
	printf("Tong so hoc sinh trong cac lop co hoc sinh nhieu hon trung binh la %d\n ", z*(y+1));
	printf("Khong co lop nao co so hoc sinh bang so hoc sinh trung binh");
    }
	
	return 0;
}
