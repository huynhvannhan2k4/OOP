/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class SanPham_HoaDon {
	private:
		string TenSanPham;
		string NamSanXuat;
		long GiaThanh;
	public:
		SanPham_HoaDon(string TenSanPham = "",string NamSanXuat = "", long GiaThanh = 0);
		~SanPham_HoaDon();
		void Input();
		void Output();
		long getGiaThanh() const {
			return GiaThanh;
		}
};

class HoaDon_BanSanPham : public SanPham_HoaDon {
	private:
		int SoLuongBan;
		long GiaBan;
	public:
		void Input();
		void Output();
		long TinhTien();
		long TinhTienThue();
		long TinhTienLai();
};

SanPham_HoaDon::SanPham_HoaDon (string TenSanPham, string NamSanXuat,long GiaThanh) : TenSanPham(TenSanPham), NamSanXuat(NamSanXuat), GiaThanh(GiaThanh) {}

SanPham_HoaDon::~SanPham_HoaDon() {}

void SanPham_HoaDon::Input() {
	cout << "===========NHAP THONG TIN HOA DON BAN SAN PHAM===========" << endl;
	cout << "\n NHAP TEN SAN PHAM: ";
	getline(cin, TenSanPham);
	cout << "\n NHAP NAM SAN XUAT: ";
	getline(cin, NamSanXuat);
	cout << "\n NHAP GIA THANH: ";
	cin >> GiaThanh;
}

void SanPham_HoaDon::Output() {
	cout << "\n===========THONG TIN HOA DON BAN SAN PHAM DA NHAP===========" << endl;
	cout << "\nTEN SAN PHAM: " << TenSanPham <<"\t NAM SAN XUAT: " << NamSanXuat << "\t GIA THANH: " << GiaThanh << endl;
}

void HoaDon_BanSanPham::Input() {
	SanPham_HoaDon::Input();
	cout << "\n NHAP SO LUONG BAN: ";
	cin >> SoLuongBan;
	cout << "\n NHAP GIA BAN: ";
	cin >> GiaBan;
	cin.ignore();
}

void HoaDon_BanSanPham::Output() {
	SanPham_HoaDon::Output();
	cout << "\n\t SO LUONG BAN: " << SoLuongBan << "\t GIA BAN: "<< GiaBan << endl;
	cout << "\n \t THANH TIEN: " << TinhTien() << "\t TIEN THUE: " << TinhTienThue() << "\t TIEN LAI: " << TinhTienLai() << endl;
}

long HoaDon_BanSanPham::TinhTien() {
	long TinhThanhTien;
	TinhThanhTien = SoLuongBan * GiaBan;
	return TinhThanhTien;
}

long HoaDon_BanSanPham::TinhTienThue() {
	long TinhThue;
	TinhThue = (TinhTien()/100)*10;
	return TinhThue;
}

long HoaDon_BanSanPham::TinhTienLai() {
	long TinhLai;
	TinhLai = (GiaBan - getGiaThanh()) * SoLuongBan;
	return TinhLai;
}

// HOAN DOI VI TRI HAI PHAN TU
void swap(HoaDon_BanSanPham* a, HoaDon_BanSanPham* b) {
	HoaDon_BanSanPham t = *a;
	*a = *b;
	*b = t;
}

// HAM PHAN VUNG DUNG TRONG QuickSort
int partition (HoaDon_BanSanPham arr[], int low, int high) {
	long pivot = arr[high].TinhTienLai(); // pivot
	int i = (low - 1); // CHI SO CUA PHAN TU NHO HON

	for (int j = low; j <= high - 1; j++) {
		// NEU PHAN TU HIEN TAI LON HON HOAC BANG pivot
		if (arr[j].TinhTienLai() >= pivot) {
			i++; // TANG CHI SO CUA PHAN TU NHO HON
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

// HAM THUC HIEN THUAT TOAN QuickSort
void quickSort(HoaDon_BanSanPham arr[], int low, int high) {
	if (low < high) {
		// pi LA CHI SO PHAN VUNG, arr[p] DA DUNG VI TRI
		int pi = partition(arr, low, high);

		// SAP XEP DE QUY CAC PHAN TU TRUOC VA SAU PHAN VUNG
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main() {
	int n;
	cout << "\t NHAP SO HOA DON BAN SAN PHAM N= ";
	cin >> n;
	cin.ignore();
	HoaDon_BanSanPham a[n];
	for (int i = 0; i < n; i++) {
		cout << "\nHOA DON: " << (i + 1) << ": \n";
		a[i].Input();
	}

	// SAP XEP MANG THEO THU TU GIAM DAN CUA LOI NHUAN
	quickSort(a, 0, n-1);

	// XUAT MANG DA SAP XEP
	cout << "\nDanh sach sau khi sap xep giam dan theo tien lai:\n";
	for (int i = 0; i < n; i++) {
		cout << "\nHoa don: " << (i + 1) << ": \n";
		a[i].Output();
	}

	// TIM HOA DON CO TIEN THUE CAO NHAT
	long maxTax = a[0].TinhTienThue();
	for (int i = 1; i < n; i++) {
		long tax = a[i].TinhTienThue();
		if (tax > maxTax) {
			maxTax = tax;
		}
	}

// XUAT THONG TIN CAC HOA DON CO TIEN THUE CAO NHAT
	cout << "\nTHONG TIN CAC HOA DON CO TIEN THUE CAO NHAT:\n";
	for (int i = 0; i < n; i++) {
		if (a[i].TinhTienThue() == maxTax) {
			cout << "\nHoa don: " << (i + 1) << ": \n";
			a[i].Output();
		}
	}

	// TINH TONG TIEN CUA TAT CA CAC DON HANG
	long long total = 0;
	for (int i = 0; i < n; i++) {
		total += a[i].TinhTien();
	}

	// XUAT TONG TIEN
	cout << "\nTONG TIEN CUA TAT CA DON HANG: " << total << endl;

	return 0;
}
