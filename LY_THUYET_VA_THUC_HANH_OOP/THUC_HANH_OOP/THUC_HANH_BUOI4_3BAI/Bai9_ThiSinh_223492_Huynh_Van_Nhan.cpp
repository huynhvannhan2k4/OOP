/*
	Ho va ten: Huynh Van Nhan
	lop: DH22TIN04
	MSSV: 223492
*/

#include <iostream>
using namespace std;

class ThiSinh {
	private:
		string hoTen,Diachi;
		float dToan, dLy, dHoa;


	public:
		void Nhap();
		void Xuat();
		float DT();
		void DC();
};

float ThiSinh::DT() {
	return (dToan + dLy + dHoa);
}
void ThiSinh::Nhap() {
	cout << "Nhap Ho Ten:\t";
	cin.ignore();
	getline(cin, hoTen);
	cout << "Nhap dia chi:\t";
	getline(cin, Diachi);
	cout << "Nhap diem Toan:\t";
	cin >> dToan;
	cout << "Nhap diem Ly:\t";
	cin >> dLy;
	cout << "Nhap diem Hoa:\t";
	cin >> dHoa;
}
void ThiSinh::Xuat() {
	cout << "Ho ten: " << hoTen << endl;
	cout << "Dia chi: " << Diachi << endl;
	cout << "Diem Toan: " << dToan << endl;
	cout << "Diem Ly: " << dLy << endl;
	cout << "Diem Hoa: " << dHoa << endl;
	cout << "Tong diem: "<< DT() << endl;
}
int main() {
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	ThiSinh TS[n];
	if(n<=1)
		cout<<"Sai roi hay nhap lai"<<endl;
	else {
		cout << "NHAP THONG TIN CHO HOC SINH: " << endl;
		int i = 0;
		do {

			TS[i].Nhap();
			i++;
		} while (i < n) ;

		cout << "IN NHAP THONG TIN : " << endl;
		i = 0;
		do {
			TS[i].Xuat();
			i++;
		} while (i < n) ;
		cout << "\nDanh sach thi sinh trung tuyen:" << endl;
		for (int i = 0; i < n; i++) {
			if (TS[i].DT() >= 18) {
				TS[i].Xuat();
				cout << endl;
			}
		}
		return 0;
	}
}
