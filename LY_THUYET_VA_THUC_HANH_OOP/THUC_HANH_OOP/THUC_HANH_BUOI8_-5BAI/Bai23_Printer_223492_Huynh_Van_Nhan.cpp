/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
using namespace std;
// CLASS MAY IN
class Printer {
	private:
		int speed; // TOC DO IN
		float weight; // TRONG LUONG
		string year; // NAM SAN XUAT
		string firm; // DIA CHI
	public:
		// CONSTRUCTOR KHOI TAO GIA TRI MAC DINH BAN DAU, DOI VOI KIEU SO GIA TRI BAN DAU KHOI TAO BANG 0, DOI VOI DANG CHUOI KY TU THI DE RONG HOAC KHOANG TRANG.
		Printer(int speed = 0,float weight = 0, string year = "", string firm = "");
		// HAM HUY DESTRUCTOR
		~Printer();
		// HAM NHAP VA XUAT DOI VOI LOP Printer
		void Input();
		void Output();
};

// MAY IN KIM
// 1 CLASS NEW DUOC KE THUA TU 1 CLASS CU O CHE DO public
class MatrixpPrinter : public Printer {
	private:
		int skim; // SO KIM
	public:
		void Input();
		void Output();
};
// MAY IN LASER
// 1 CLASS NEW DUOC KE THUA TU 1 CLASS CU O CHE DO public
class LaserPrinter : public Printer {
	private:
		int dophandai; // DO PHAN GIAI
	public:
		void Input();
		void Output();
};

// KHAI BAO CONSTRUCTOR NGOAI CLASS
// CAC DOI SO TRONG HAM CONSTRUCTOR KHONG CO GAN GIA TRI MAC NHIEN [: speed(speed),weight(weight), year(year), firm(firm) {} LA SAO ???]
Printer::Printer(int speed, float weight, string year, string firm) : speed(speed),weight(weight), year(year), firm(firm) {}
// KHAI BAO HAM DESTRUCTOR NGOAI CLASS
Printer::~Printer() {}

// HAM NHAP CLASS Printer
void Printer::Input() {
	cout << "===========NHAP THONG TIN===========" << endl;

	cout << "\n NHAP TRONG LUONG MAY: ";
	cin >> weight;
	fflush(stdin);
	cout << "\n NHAP NAM SAN XUAT: ";
	getline(cin, year);

	cout << "\n NHAP HANG SAN XUAT: ";
	getline(cin, firm);

	cout << "\n NHAP TOC DO IN: ";
	cin >> speed;
	fflush(stdin);
}
// HAM XUAT CLASS Printer
void Printer::Output() {
	cout << "===========THONG TIN===========" << endl;
	cout << "\n TRONG LUONG MAY: " << weight << endl;
	cout << "\n NAM SAN XUAT: " << year << endl;
	cout << "\n HANG SAN XUAT: " << firm << endl;
	cout << "\n TOC DO IN: " << speed << endl;
}
// HAM NHAP CLASS MatrixpPrinter
void MatrixpPrinter::Input() {
	Printer::Input();
	cout << "\nSO KIM: ";
	cin >> skim;
}
// HAM XUAT CLASS MatrixpPrinter
void MatrixpPrinter::Output() {
	Printer::Output();
	cout << "\nSO KIM: " << skim << endl;
}
// HAM NHAP CLASS LaserPrinter
void LaserPrinter::Input() {
	Printer::Input();
	cout << "\nDO PHAN GIAI: ";
	cin >> dophandai;
}
// HAM XUAT CLASS LaserPrinter
void LaserPrinter::Output() {
	Printer::Output();
	cout << "\nDO PHAN GIAI: " << dophandai << endl;
}

// CHUONG TRINH CHINH
int main() {
	// MAY IN KIM VOI SO LUONG LA 1 SO NGUYEN N DUOC NHAP TU BAN PHIM
	int n;
	cout << "\tNHAP SO LUONG MAY IN KIM:";
	cin >> n;
	cin.ignore(); // ???
	// KHOI TAO MOT MANG VOI SO LUONG N-1 PHAN TU , MAY IN KIM
	MatrixpPrinter a[n];
	// NHAP SO LUONG MAY IN KIM VAO TRONG MANG
	for (int i = 0; i < n; i++) {
		cout << "\nMAY IN KIM: " << (i + 1) << ": \n";
		// SU DUNG PHUONG THUC NHAP
		a[i].Input();
	}

	// MAY IN LASER VOI SO LUONG LA 1 SO NGUYEN N DUOC NHAP TU BAN PHIM
	cout << "\tNHAP SO LUONG MAY IN LASER:";
	int m;
	cin >> m;
	cin.ignore();
	// KHOI TAO MOT MANG VOI SO LUONG M-1 PHAN TU , MAY IN KIM
	LaserPrinter b[m];
	// NHAP SO LUONG MAY IN LASER VAO TRONG MANG
	for (int i = 0; i < m; i++) {
		cout << "\nMAY IN LASER: " << (i + 1) << ": \n";
		// SU DUNG PHUONG THUC NHAP
		b[i].Input();
	}

	// IN THONG TIN 2 LOAI MAY IN RA MAN HINH KHI NHAP XONG
	cout << "THONG TIN MAY IN KIM VUA NHAP: \n";
	// XUAT SO LUONG MAY IN THEO N PHAN TU VUA NHAP VAO TRONG
	for (int i = 0; i < n; i++)
	// SU DUNG PHUONG THUC XUAT
		a[i].Output();


	cout << "THONG TIN MAY IN LASER VUA NHAP: \n";
	for (int i = 0; i < m; i++)
		b[i].Output();


	return 0;
}

