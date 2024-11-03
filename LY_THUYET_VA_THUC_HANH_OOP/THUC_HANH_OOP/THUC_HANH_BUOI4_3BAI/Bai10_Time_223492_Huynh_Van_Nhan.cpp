/*
	Ho va ten: Huynh Van Nhan
	lop: DH22TIN04
	MSSV: 223492
*/

#include <iostream>

using namespace std;

class Time {
	private:
		int gio;
		int phut;
		int giay;

	public:
		Time(int gio = 0, int phut = 0, int giay = 0) {
			this->gio = gio;
			this->phut = phut;
			this->giay = giay;
		}

		void set(int gio, int phut, int giay) {
			this->gio = gio;
			this->phut = phut;
			this->giay = giay;
		}

		void xuat24h() {
			cout << gio << ":" << phut << ":" << giay << endl;
		}

		void xuat12h() {
			string amPm = "AM";
			if (gio >= 12) {
				amPm = "PM";
				gio -= 12;
			}
			if (gio == 0) {
				gio = 12;
			}
			cout << gio << ":" << phut << ":" << giay << " " << amPm << endl;
		}
};

int main() {
	Time t(23, 59, 58);
	t.xuat24h();
	t.xuat12h();
	return 0;
}
