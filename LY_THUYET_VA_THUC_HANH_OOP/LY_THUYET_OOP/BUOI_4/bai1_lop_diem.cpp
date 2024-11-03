//Bai 1: 
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include "iostream"
using namespace std;
// KHAI BAO LOP
class Diem{
	// TP1: THUOC TINH - PRIVATE
	private: int x, y;
	// TP2: PHUONG THUC - PUBLIC
	public:
		void KhoiTao(int ,int);
		void NhapDiem();
		void HienThi();
		void DiChuyen(int , int);
		
};

// Dinh nghia Ham Thanh Vien ben ngoai lop

void Diem::KhoiTao(int h, int t){
	x= h; y=t;
}
void Diem::NhapDiem(){
	cout << " Nhap x = "; cin >> x;
	cout << " Nhap y = "; cin >> y;
}
void Diem::HienThi(){
	cout << "( "<< x <<" ,"<< y <<" )";
}
void Diem::DiChuyen(int dx, int dy){
	x+=dx; y+=dy;
}


int main(){
	Diem d;
	d.KhoiTao(10,20);
	d.NhapDiem();
	d.HienThi();
	d.DiChuyen(30,90);
	return 0;
}

