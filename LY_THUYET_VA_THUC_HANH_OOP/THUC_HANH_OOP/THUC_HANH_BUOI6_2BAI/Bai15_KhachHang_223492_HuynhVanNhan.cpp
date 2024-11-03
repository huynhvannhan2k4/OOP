/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
*/
// Khai bao thu vien
#include "iostream"
#include "string"
using namespace std;

// KHAI BAO LOP
class KhachHang {
		// TP1: THUOC TINH - PRIVATE
	private:
		int SoLuong;
		string MaKH, TenKH, DiaChi, SoDienThoai ;
		double DonGia, Thue;

		// TP2: PHUONG THUC - PUBLIC
	public:
		KhachHang(int SL=0, string M="", string TKH="",string DC="",string SDT="",double DG=0,double T=0);
		~KhachHang();
		void NhapThongTin();
		void HienThiThongTin();
		double TinhTien();

};
KhachHang::KhachHang(int SL, string M, string TKH,string DC,string SDT,double DG,double T) {
	SoLuong = SL;
	MaKH = M;
	TenKH = TKH;
	DiaChi = DC;
	SoDienThoai = SDT;
	DonGia = DG;
	Thue = T;
}
KhachHang::~KhachHang() {

}

void KhachHang::NhapThongTin() {
	cout << "===========NHAP THONG TIN KHACH HANG===========" << endl;
	cout << "\n NHAP MA KHACH HANG: " ;
	getline(cin,MaKH);
	cout << "\n NHAP TEN KHACH HANG: " ;
	getline(cin,TenKH);
	cout << "\n NHAP DIA CHI KHACH HANG: " ;
	getline(cin,DiaChi);
	cout << "\n NHAP SO DIEN THOAI KHACH HANG: " ;
	getline(cin,SoDienThoai);
	cout << "\n NHAP SO LUONG KHACH HANG MUA: " ;
	cin >> SoLuong;
	cout << "\n NHAP DON GIA MAT HANG: " ;
	cin >> DonGia;
	cout << "\n NHAP THUE SUAT: " ;
	cin >> Thue;
	cin.ignore();

}

void KhachHang::HienThiThongTin() {
	cout << "===========THONG TIN KHACH HANG===========" << endl;
	cout << "\n MA KHACH HANG: " << MaKH;
	cout << "\n TEN KHACH HANG: " << TenKH;
	cout << "\n DIA CHI KHACH HANG: " << DiaChi;
	cout << "\n SO DIEN THOAI KHACH HANG: " << SoDienThoai;
	cout << "\n SO LUONG KHACH HANG MUA: " << SoLuong;
	cout << "\n DON GIA MAT HANG: " << DonGia;
	cout << "\n THUE SUAT: " << Thue;
}

double KhachHang::TinhTien() {
	return SoLuong * DonGia + Thue;
}

int main() {
	KhachHang KH1;
	KH1.NhapThongTin();
	KH1.HienThiThongTin();
	cout << "\n TONG TIEN HOA DON: " << KH1.TinhTien();
	return 0;
}

