/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
using namespace std;
// class chinh co ten la thuc pham
class ThucPham {
	private:
		string name;
		float price;
	public:
		ThucPham(string name = "", float price = 0);
		~ThucPham();
		void Input();
		void Output();
};
// class thua ke tu lop thuc pham co them thong tin la so hop
class ThucPhamHop : public ThucPham {
	private:
		int sohop;
	public:
		void Input();
		void Output();
};
// class thua ke tu lop thuc pham co them thong tin la khoi luuong
class ThucPhamKHop : public ThucPham {
	private:
		float khoiluong;
	public:
		void Input();
		void Output();
};
ThucPham::ThucPham (string name, float price) : name(name), price(price) {}

ThucPham::~ThucPham() {}

void ThucPham::Input() {
	cout << "===========NHAP THONG TIN THUC PHAM===========" << endl;
	cout << "\n NHAP TEN THUC PHAM: ";
	getline(cin, name);
	cout << "\n NHAP PRICE THUC PHAM: ";
	cin >> price;
}

void ThucPham::Output() {
	cout << "===========THONG TIN THUC PHAM DA NHAP===========" << endl;
	cout << "\n TEN THUC PHAM: " << name;
	cout << "\n PRICE THUC PHAM: " << price;
}

void ThucPhamHop::Input() {
	ThucPham::Input();
	cout << "\n NHAP SO HOP: ";
	cin >> sohop;
	cin.ignore();
}

void ThucPhamHop::Output() {
	ThucPham::Output();
	cout << "\n SO HOP: " << sohop << endl;
}


void ThucPhamKHop::Input() {
	ThucPham::Input();
	cout << "\n NHAP KHOI LUONG: ";
	cin >> khoiluong;
	cin.ignore();
}

void ThucPhamKHop::Output() {
	ThucPham::Output();
	cout << "\n KHOI LUONG: " << khoiluong << endl;
}

int main() {
	// THUC PHAM CO HOP
	int n;
	cout << "\t NHAP SO THUC PHAM CO HOP N= ";
	cin >> n;
	cin.ignore();
	ThucPhamHop a[n];
	for (int i = 0; i < n; i++) {
		cout << "\nHOP THU: " << (i + 1) << ": \n";
		a[i].Input();
	}

	// THUC PHAM KHONG CO HOP
	int m;
	cout << "\t NHAP SO THUC PHAM KHONG CO HOP M= ";
	cin >> m;
	cin.ignore();
	ThucPhamKHop b[m];
	for (int i = 0; i < m; i++) {
		cout << "\n HOP THU: " << (i + 1) << ": \n";
		b[i].Input();
	}

	// XUAT TAT CA CAC THONG TIN TREN
	cout << "THONG TIN VUA NHAP: \n";
	for (int i = 0; i < n; i++)
		a[i].Output();

	cout << "THONG TIN VUA NHAP: \n";
	for (int i = 0; i < m; i++)
		b[i].Output();

	return 0;
}

