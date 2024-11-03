// Bai 3: viet chuong trinh nhap mang mot chieu n>0 va <=100
// a/ Viet ham nhap mang
// b/ Viet ham xuat mang
// c/ xuat day cac SNT thuoc mang vua nhap, tinh tong cac cac SNT do
// d/ Sap xep lai mang theo chieu tang dan
// e/ Tinh tong cac phan tu le, tong cac phan tu chan
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include <stdio.h>
#include <conio.h>
#include <math.h> 

// a/ Viet ham nhap mang
void nhap_array(unsigned int n, int array[]){
	for(int i=0;i<n;i++){
		printf("\n Nhap phan tu thu Array[%d]: ",i+1);
		scanf("%d",&array[i]);
	}
}
// b/ Viet ham xuat mang
int xuat_array(unsigned int n,int array[]){
	for(int i=0;i<n;i++){
		printf("\nArray[%d]: %d",i+1,array[i]);
	}
}
// c/ xuat day cac SNT thuoc mang vua nhap, tinh tong cac cac SNT do
// kiem tra so nguyen to   
bool KTSNT(int n){
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// Xuat cac so nguyen to
void XCSNT(unsigned int n, int array[])
{
    for (int i = 0; i < n; i++)
    {
        if (KTSNT(array[i]))
        {
            printf("%d\t", array[i]);
        }
    }
}
// d/ Sap xep lai mang theo chieu tang dan
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

void sortArrTang(unsigned int n, int array[]){
    for(int i=0;i<n-1;i++){
    	for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                swap(array[i], array[j]);
            }
        }
	}
       
}
// e/ Tinh tong cac phan tu le, tong cac phan tu chan
// Tính t?ng các s? l? trong m?ng
int Sum_le(unsigned int n, int array[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            sum += array[i];
        }
    }
    return sum;
}

// Tinh tong cac phan tu chan
int Sum_chan(unsigned int n, int array[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            continue;
        }
        sum += array[i];
    }
    return sum;
}




int main(){
	unsigned int n;
	int array[100];
	
	do{
		printf("Nhap vao so phan tu 0<N<=100: "); scanf("%d",&n);
	}while (n<0 || n>=100);
	
	nhap_array(n,array);
	xuat_array(n,array);
	
	KTSNT(n);
	printf("\n+ Danh sach so nguyen to: ");
	XCSNT(n,array);
	
	sortArrTang(n,array);
	printf("\n+ Mang sau khi duoc sap xep la: ");
	xuat_array(n,array);
	
	printf("\nTong so cac phan tu le = %d", Sum_le(n,array));
    printf("\nTong so cac phan tu chan = %d", Sum_chan(n,array));
    getch();
	return 0;
}
