// bai 1 giai va bien luan phuong trinh bac 2 ax^2+bx+c=0

/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	float a,b,c,x,x1,x2,denta;
	printf("Nhap vao he so a= "); scanf("%f",&a);
	printf("Nhap vao he so b= "); scanf("%f",&b);
	printf("Nhap vao he so c= "); scanf("%f",&c);
	if(a!=0){
		denta =(float)((b*b)-4*a*c);
		if(denta>0){
			x1= (-b+(sqrt(denta)))/(2*a);
			x2= (-b-(sqrt(denta)))/(2*a);
			printf("\n Phuong trinh co nghiem x1 = %.2f",x1);
			printf("\n Phuong trinh co nghiem x2 = %.2f",x2);
		}
		else if(denta==0){
			x= (float)(-b/(2*a));
			printf("\n Phuong trinh co nghiem kep la:%.2f",x);
		}
		else
			printf("\n Phuong trinh vo nghiem !");
	}
	else{
		printf("\n Phuong trinh bac 1");
		x= (float)(-c/b);
		printf("\n Phuong trinh co nghiem la:%.2f",x);
	}
	return 0;
}
