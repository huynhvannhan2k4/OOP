//Bai 5: Viet ham va dinh nghia lai ham
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include "iostream"
#define MAX 1000
using namespace std;

//Khai bao nguyen mau ham
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);

int TinhTong(int a[], int n);
int TongChan(int a[], int n);
int TongLe(int a[], int n);

void ChenMang(int a[], int &n, int vitri, int val);
void XoaMang(int a[], int &n, int vitri);

void TimKiem(int a[], int x, int n);
int TimMax(int a[], int n);
int TimMin(int a[], int n);
// Chuong trinh chinh
int main(){
	int n, a[n],x;
	cout << "Nhap so luong phan tu trong mang N= "; cin >> n;
	NhapMang(a,n);
	cout << "Cac phan tu trong mang la: " ;
	XuatMang(a,n);
	cout << "\nTong cac phan tu trong mang la: " << TinhTong(a,n)<< endl;
	cout << "Tong cac phan tu CHAN trong mang la: " << TongChan(a,n)<< endl;
	cout << "Tong cac phan tu LE trong mang la: " << TongLe(a,n)<< endl;
	cout << "Nhap phan tu can tim trong mang: "; cin >> x;
	TimKiem(a,x,n);
	cout << "\nPhan tu lon nhat trong mang la: ";
	TimMax(a,n);
	cout << "\nPhan tu nho nhat trong mang la: ";
	TimMin(a,n);
	cout << "\n=======THEM PHAN TU======\n";
	int val,vitri;
	cout << "\nNhap vi tri muon chen: "; cin >> vitri;
	cout << "\nNhap so can them: "; cin >> val;
	ChenMang(a, n, vitri, val);
	cout << "\nMang sau khi them: ";
	XuatMang(a,n);
	cout << "\n=======XOA PHAN TU======\n";
	cout << "\nNhap vi tri muon xoa: "; cin >> vitri;
	XoaMang(a, n, vitri);
	cout << "\nMang sau khi xoa: ";
    XuatMang(a,n);
	
}
// CAC CHUONG TRINH CON
// HAM NHAP MANG THEO SO PHAN TU N
void NhapMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout << "A[" << i+1 << "]: ";
		cin >> a[i];
	}
}
// HAM XUAT TAT CA CAC PHAN TU CO TRONG MANG
void XuatMang(int a[], int n){
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
}
// HAM TINH TONG GIA TRI CUA CAC PHAN TU TRONG MANG
int TinhTong(int a[], int n){
	int KQ=0;
	for(int i=0;i<n;i++)
		KQ+=a[i];
	return KQ;
}
// HAM TINH TONG GIA TRI CUA CAC PHAN TU CHAN CO TRONG MANG
int TongChan(int a[], int n){
	int KQ=0;
	for(int i=0;i<n;i++)
		if(a[i]%2==0)
			KQ+=a[i];
	return KQ;
}
// HAM TINH TONG GIA TRI CUA CAC PHAN TU LE CO TRONG MANG
int TongLe(int a[], int n){
	int KQ=0;
	for(int i=0;i<n;i++)
		if(a[i]%2!=0)
			KQ+=a[i];
	return KQ;
}
// HAM THEM PHAN TU VAO TRONG MANG
void ChenMang(int a[], int &n, int vitri, int val)
{
    int i;
    for(i=n;i>vitri;i--)
    {
        a[i]=a[i-1];
    }
    a[vitri] = val;
    n++;
}

void XoaMang(int a[], int &n, int vitri)
{
    int i;
    for(i=vitri;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    n--;
}
// HAM TIM KIEM PHAN TU TRONG MANG
void TimKiem(int a[], int x, int n){
	int TK;
	for(int i=0;i<n;i++)
		if(x==a[i]){
			TK=a[i];
			cout << TK;
	}
	cout << 0;
}
// HAM TIM GIA TRI LON NHAT CUA CAC PHAN TU TRONG MANG
int TimMax(int a[], int n){
	int Max = a[0];
	for(int i=0;i<n;i++)
		if(a[i]>Max)
			Max=a[i];
	cout << Max;
}
// HAM TIM GIA TRI NHO NHAT CUA CAC PHAN TU TRONG MANG
int TimMin(int a[], int n){
	int Min = a[0];
	for(int i=0;i<n;i++)
		if(a[i]<Min)
			Min=a[i];
	cout << Min;
}
