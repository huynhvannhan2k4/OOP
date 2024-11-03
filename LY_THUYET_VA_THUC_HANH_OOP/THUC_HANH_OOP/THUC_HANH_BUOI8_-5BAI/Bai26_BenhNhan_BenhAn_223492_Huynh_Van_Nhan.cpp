/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
using namespace std;
// class chinh co ten la benh nhan
class BenhNhan {
	private:
		string name;
		string queQuan;
		string namSinh;
	public:
		BenhNhan(string name = "", string queQuan = "", string namSinh = "");
		~BenhNhan();
		void Input();
		void Output();
};
// class thua ke tu lop thuc pham co them thong tin la so hop
class BenhAn : public BenhNhan {
	private:
		string nameBenhAn;
		float tienVienPhi;
	public:
		void Input();
		void Output();
};

BenhNhan::BenhNhan(string name, string queQuan, string namSinh) : name(name), queQuan(queQuan) ,namSinh(namSinh){}

BenhNhan::~BenhNhan() {}

void BenhNhan::Input() {
	cout << "===========NHAP THONG TIN BENH NHAN===========" << endl;
	cout << "\n NHAP TEN BENH NHAN: ";
	getline(cin, name);
	cout << "\n NHAP QUE QUAN BENH NHAN: ";
	getline(cin, queQuan);
	cout << "\n NHAP NAM SINH: ";
	getline(cin, namSinh);
}

void BenhNhan::Output() {
	cout << "===========THONG TIN BENH NHAN DA NHAP===========" << endl;
	cout << "\n TEN BENH NHAN: " << name;
	cout << "\n QUE QUAN: " << queQuan;
	cout << "\n NAM SINH: " << namSinh;
}

void BenhAn::Input() {
	BenhNhan::Input();
	cout << "\n NHAP TEN BENH AN: ";
	getline(cin, nameBenhAn);
	cout << "\n NHAP SO TIEN VIEN PHI: ";
	cin >> tienVienPhi;
	cin.ignore();
}

void BenhAn::Output() {
	BenhNhan::Output();
	cout << "\n TEN BENH AN: " << nameBenhAn << endl;
	cout << "\n SO TIEN VIEN PHI: " << tienVienPhi << endl;
}

// CHUONG TRINH CHINH
int main() {
	// NHAP DANH SACH N BENH AN
	int n;
	cout << "\t NHAP DANH SACH N BENH AN: ";
	cin >> n;
	cin.ignore();
	BenhAn a[n];
	for (int i = 0; i < n; i++) {
		cout << "\nBENH AN THU: " << (i + 1) << ": \n";
		a[i].Input();
	}

	// XUAT TAT CA CAC THONG TIN TREN
	cout << "THONG TIN VUA NHAP: \n";
	for (int i = 0; i < n; i++)
		a[i].Output();

	return 0;
}

