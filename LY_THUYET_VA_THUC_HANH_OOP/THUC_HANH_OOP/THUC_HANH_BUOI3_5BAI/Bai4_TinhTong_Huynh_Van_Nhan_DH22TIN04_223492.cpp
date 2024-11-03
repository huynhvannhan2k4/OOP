/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
	May:32
	Bai 4: Tinh tong
*/
#include "iostream"
using namespace std;
// ---KHAI BAO LOP
class Lopa{
	// TP1: THUOC TINH - PRIVATE
	private:
			int n,temp;
	// TP2: PHUONG THUC - PUBLIC
	public:
		void Nhap();
		int Tong();
		void Xuat();
};
// Cac chuong trinh con
// Ham Nhap
void Nhap();
int Tong();
void Xuat();

// Chuong trinh chinh
int main(){
	Lopa a;
	a.Nhap();
	a.Xuat();
	return 0;
}
void Lopa::Nhap(){
	cout<<"Nhap n="; cin>>n;
}
int Lopa::Tong(){
	for(int i=0;i<=n;i++)
		temp+=i;
	return temp;
}
void Lopa::Xuat(){
	cout<<"Tong ="<< Tong();
}
