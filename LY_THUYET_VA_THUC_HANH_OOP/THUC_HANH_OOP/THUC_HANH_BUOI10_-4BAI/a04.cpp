/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class CongDan {
		string MaID, Ho_ten;
	public:
		void Nhap();
		string get_MaID();
		string get_Ho_ten();
};

class ThueBao: public CongDan {
		string SDT;
		string Dia_chi;
	public:
		void Nhap();
		void In1();
		void In2();
		string get_SDT();
};

void CongDan::Nhap() {
	cout << "MaID: ";
	getline(cin, MaID);
	cout << "Ho ten: ";
	getline(cin, Ho_ten);
}

string CongDan::get_MaID() {
	return MaID;
}

string CongDan::get_Ho_ten() {
	return Ho_ten;
}

void ThueBao::Nhap() {
	CongDan::Nhap();
	cout << "So dien thoai: ";
	getline(cin, SDT);
	cout << "Dia chi: ";
	getline(cin, Dia_chi);
}

void ThueBao::In1() {
	cout << setw(20) << left << "MaID";
	cout << setw(20) << left << "Ho ten";
	cout << setw(30) << left << "So dien thoai";
	cout << setw(20) << left << "Dia chi" << endl;
}

void ThueBao::In2() {
	cout << setw(20) << left << get_MaID();
	cout << setw(20) << left << get_Ho_ten();
	cout << setw(30) << left << SDT;
	cout << setw(20) << left << Dia_chi << endl;
}

string ThueBao::get_SDT() {
	return SDT;
}

int main() {
	int n, i, kt = 0, temp;
	string x;
	do {
		cout << "Nhap so luong cong dan: ";
		cin >> n;
		cin.ignore();
	} while(n < 0);
	cout << endl;
	ThueBao a[n], b;
	for(i = 0; i < n; i++) {
		cout << "Nhap thong tin cong dan thu " << i + 1 << ":" << endl;
		a[i].Nhap();
		cout << endl;
	}
	cout << endl;
	cout << setw(5) << left << "STT";
	b.In1();
	for(i = 0; i < n; i++) {
		cout << setw(5) << left << i + 1;
		a[i].In2();
	}
	cout << endl;
	cout << "Nhap so dien thoai can tim: ";
	getline(cin, x);
	for(i = 0; i < n; i++) {
		if(a[i].get_SDT() == x) {
			kt = 1;
			temp = i;
			break;
		}
	}
	cout << endl;
	if(kt == 1) {
		b.In1();
		a[temp].In2();
	} else {
		cout << "Khong co so can tim!";
	}
	return 0;
}

