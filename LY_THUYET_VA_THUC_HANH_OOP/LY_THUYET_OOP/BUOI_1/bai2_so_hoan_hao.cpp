// Bai 2: Viet chuong trinh kiem tra so nhap vao co phai la so hoan hao khong
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

bool check_HH(int n){
	int tong = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            tong += i;
            if(i != n / i){
                tong += n / i;
            }
        }
    }
    if(tong - n == n){
        return 1;
    }
    return 0;
}
int main(){
	int n;
	do{
		printf("Nhap n= "); scanf("%d",&n);
		
	}while(n<=0);
	check_HH(n);
	if(check_HH(n)==1)
		printf("\n %d la so hoan hao ",n);
	else
		printf("\n %d la so khong hoan hao ",n);
		
	return 0;	
}
