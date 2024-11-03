//Bai 1: Class Tinh chu vi va dien tich hinh chu nhat
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include "iostream"
using namespace std;
// KHAI BAO LOP
class HinhChuNhat{
	// TP1: THUOC TINH - PRIVATE
	private: double ChieuDai, ChieuRong;
	// TP2: PHUONG THUC - PUBLIC
	public: 
		void Nhap(){
			cout << "Nhap chieu dai: " << endl; cin >> ChieuDai;
			cout << "Nhap chieu rong: " << endl; cin >> ChieuRong;
		}
		void In(){
			cout << ChieuDai << "," << ChieuRong << endl;
			cout << "Chu Vi la: " << CHUVI() << endl;
			cout << "Dien Tich la: " << DIENTICH() << endl;
		}
		double CHUVI(){
			double h=(ChieuDai+ChieuRong)*2;
			return (h);
		}
		double DIENTICH(){
			double h=ChieuDai*ChieuRong;
			return (h);
		}
};
int main(){
	HinhChuNhat h; // khai bao doi tuong h co kieu du lieu HinhChuNhata  
	h.Nhap();
	cout << "Thong so cua h: " << endl;
	h.In();
	return 0;
}

