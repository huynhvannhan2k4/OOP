#include <iostream>
using namespace std;

class Date {
	private:
		int Day, Month, Year;
	public:
		void Nhap();
		void HienThi();
		bool LaNamNhuan(int);
		int TinhSoNgayTrongThang(int, int);
		bool KiemTraHopLe();
		void TangNgay();
};

void Date::Nhap() {
	cout << "Nhap Ngay: ";
	cin >> Day;
	cout << "Nhap Thang: ";
	cin >> Month;
	cout << "Nhap Nam: ";
	cin >> Year;
}

void Date::HienThi() {
	cout  << Day << "/" << Month << "/" << Year << endl;
}

bool Date::LaNamNhuan(int Year) {
	return (Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0;
}

int Date::TinhSoNgayTrongThang(int Month, int Year) {
	switch (Month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return LaNamNhuan(Year) ? 29 : 28;
		default:
			return 0;
	}
}

bool Date::KiemTraHopLe() {
	if (Year < 0 || Month < 1 || Month > 12 || Day < 1 || Day > TinhSoNgayTrongThang(Month, Year)) {
		return false;
	}
	return true;
}
void Date::TangNgay() {
	Day++;
	if (Day > TinhSoNgayTrongThang(Month, Year)) {
		Day = 1;
		Month++;
		if (Month > 12) {
			Month = 1;
			Year++;
		}
	}
}
int main() {
	Date d;
	do {
		d.Nhap();
		if (!d.KiemTraHopLe()) {
			cout << "Ngay khong hop le. Vui long nhap lai." << endl;
		}
	} while (!d.KiemTraHopLe());
	d.HienThi();
	cout << "\n5 ngay tiep theo: " << endl;
	for (int i=0; i<5; i++) {
		d.TangNgay();
		d.HienThi();
	}
	return 0;
}

