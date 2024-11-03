/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
using namespace std;

class NhanVien {
	private:
		string TenNhanVien;
		string DonVi;
		float HeSoLuong;
		long LuongToiThieu;
		long LuongChinh;
		long getLuongChinh() const {
			return LuongChinh;
		}
	public:
		NhanVien(string TenNhanVien = "",string DonVi = "", float HeSoLuong = 0, long LuongToiThieu = 0);
		~NhanVien();
		void Input();
		void Output();
		long Luong();
};

class KySu : public NhanVien {
	private:
		int ks;
		int SoNam;
		long PhuCapChuyenMon;
	public:
		void Input();
		void Output();
};

NhanVien::NhanVien(string TenNhanVien, string DonVi, float HeSoLuong, long LuongToiThieu) : TenNhanVien(TenNhanVien), DonVi(DonVi), HeSoLuong(HeSoLuong) ,LuongToiThieu(LuongToiThieu) {}

NhanVien::~NhanVien() {}

void NhanVien::Input() {
	cout << "===========NHAP THONG TIN NHAN VIEN===========" << endl;
	cout << "\n NHAP TEN NHAN VIEN: ";
	getline(cin, TenNhanVien);
	cout << "\n NHAP DON VI: ";
	getline(cin, DonVi);
	cout << "\n NHAP HE SO LUONG: ";
	cin >> HeSoLuong;
	cout << "\n NHAP LUONG TOI THIEU: ";
	cin >> LuongToiThieu;
	cin.ignore();

}

long NhanVien::Luong() {
	LuongChinh = LuongToiThieu * HeSoLuong;
	return LuongChinh;
}

void NhanVien::Output() {
	cout << "\n===========THONG TIN NHAN VIEN DA NHAP===========" << endl;
	cout << "\nTEN NHAN VIEN: " << TenNhanVien <<"\t DON VI: " << DonVi  <<"\t HE SO LUONG: " << HeSoLuong << endl;
	cout << "\n LUONG CHINH: " << Luong() << endl;
}

void KySu::Input() {
	NhanVien::Input();
	cout << "\n NEU LA KY SU NHAP 1 , KHONG KHONG LA KY SU NHAP 0:";
	cin >> ks;
	cout << "\n SO NAM TRONG NGHE CUA BAN LA: ";
	cin >> SoNam;
	cout << "\n PHU CAP CHUYEN MON:";
	cin >> PhuCapChuyenMon;
	cin.ignore();
}

void KySu::Output() {
	NhanVien::Output();
	if (ks == 1) {
		cout << "\n TONG LUONG CUA BAN LA: " << Luong() + SoNam * PhuCapChuyenMon ;
	} else
		cout << "\n TONG LUONG CUA BAN LA: " << Luong();
}

int main() {
	int n;
	cout << "\t NHAP SO NHAN VIEN N= ";
	cin >> n;
	cin.ignore();
	KySu* a = new KySu[n];
	for (int i = 0; i < n; i++) {
		cout << "\nNhanVien THU: " << (i + 1) << ": \n";
		a[i].Input();
	}

	cout << "\n THONG TIN VUA NHAP: \n";
	for (int i = 0; i < n; i++) {
		cout << "\nNhanVien THU: " << (i + 1) << ": \n";
		a[i].Output();
	}

	delete[] a;
	return 0;
}
