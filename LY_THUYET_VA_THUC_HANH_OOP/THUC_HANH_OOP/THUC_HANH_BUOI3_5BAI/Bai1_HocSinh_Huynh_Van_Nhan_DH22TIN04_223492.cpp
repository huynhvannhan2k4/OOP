/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
	May:32
	Bai 1: Lop HocSinh 
*/
#include "iostream"
#include "string"
using namespace std;
// ---KHAI BAO LOP
class HocSinh{
	// TP1: THUOC TINH - PRIVATE
	private:
			string HoTen, Lop;
			float Toan, Ly, Hoa;
	// TP2: PHUONG THUC - PUBLIC
	public:
		void Nhap();
		void Xuat();
		float TinhTB();
};
// Cac chuong trinh con
// Ham Nhap
void Nhap();
void Xuat();
float TinhTB();

// Chuong trinh chinh
int main(){
	int n;
	cout << " Nhap so hoc sinh n: "; cin >> n;
	for(int i=0;i<n;i++){
		HocSinh HS1;
		HS1.Nhap();	
	}
	for(int i=0;i<n;i++){
		HocSinh HS1;
		HS1.Xuat();
	}
}
void HocSinh::Nhap(){
		cout <<"=================NHAP THONG TIN HOC SINH======================" <<endl;
		fflush(stdin);
		cout << " Nhap ho va ten: "; getline(cin,HoTen);
		fflush(stdin);
		cout << " Nhap lop: "; getline(cin,Lop);
		fflush(stdin);
		cout << " Nhap diem toan = "; cin >> Toan;
		cout << " Nhap diem ly = "; cin >> Ly;
		cout << " Nhap diem hoa = "; cin >> Hoa;
	
}

float HocSinh::TinhTB(){
	float TB;
	TB = (Toan+Ly+Hoa)/3;
	return TB;
	
}

void HocSinh::Xuat(){
	cout <<"=================THONG TIN HOC SINH======================" <<endl;
	cout << "\n ho va ten: "; cout << HoTen <<endl;
	cout << "\n lop: "; cout << Lop <<endl;
	cout << "\n diem toan: "<< Toan <<endl;
	cout << "\n diem ly: "<< Ly <<endl;
	cout << "\n diem hoa: "<< Hoa <<endl;
	cout << "\n diem trung binh: "<< TinhTB() <<endl;
}
