//Bai 2: Viet chuong trinh nhap thong tin sinh vien va tinh diem trung binh
// su dung bien tinh , bien dong
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include "iostream"
#include "string"
using namespace std;
// KHAI BAO LOP
class SinhVien{
	// TP1: THUOC TINH - PRIVATE
	private: int mssv;
			 string hoten, quequan; 
			 float toan, ly, hoa , tb;
			 
	// TP2: PHUONG THUC - PUBLIC
	public:
		void NhapThongTin();
		void HienThiThongTin();
		float TinhTrungBinh();
		
};

// Dinh nghia Ham Thanh Vien ben ngoai lop

void SinhVien::NhapThongTin(){
	cout << " Nhap mssv: "; cin >> mssv;
	fflush(stdin);
	cout << " Nhap ho va ten: "; getline(cin,hoten);
	fflush(stdin);
	cout << " Nhap que quan: "; getline(cin,quequan);
	fflush(stdin);
	cout << " Nhap diem toan = "; cin >> toan;
	cout << " Nhap diem ly = "; cin >> ly;
	cout << " Nhap diem hoa = "; cin >> hoa;
}
float SinhVien::TinhTrungBinh(){
	tb=(toan+ly+hoa)/3;
	return tb;                       
}

void SinhVien::HienThiThongTin(){
	
	cout << "\n mssv: "<< mssv << endl;
	cout << "\n ho va ten: "; cout << hoten <<endl;
	cout << "\n que quan: ";  cout<< quequan <<endl;
	cout << "\n diem toan: "<< toan <<endl;
	cout << "\n diem ly: "<< ly <<endl;
	cout << "\n diem hoa: "<< hoa <<endl;
	cout << "\n diem trung binh: "<< TinhTrungBinh() <<endl;
}



int main(){
//	SinhVien sv;
//	sv.NhapThongTin();
//	sv.HienThiThongTin();
//	
//	// KHAI BAO DOI TUONG DANG CON TRO
//	SinhVien *psv;
//	psv = new SinhVien;
//	psv->NhapThongTin();
//	psv->HienThiThongTin();
//	delete psv;
	// KHAI BAO DOI TUONG DANG DANH SACH
//	SinhVien ds[3];
//	cout << " NHAP THONG TIN CHO SINH VIEN:" << endl;
//	for (int i=0; i<3;i++){
//		ds[i].NhapThongTin();
//	}
//	
//	for (int i=0; i<3;i++){
//		ds[i].HienThiThongTin();
//	}
	
	
	// KHAI BAO DOI TUONG DANG DANH SACH THEO N PHAN TU
	
	int n;
	do {
		cout << " NHAP SO SINH VIEN : ";
	cin >> n;
	}while(n<=0);
	
	SinhVien ds[n];
	cout << " NHAP THONG TIN CHO SINH VIEN:" << endl;
	for (int i=0; i<n;i++){
		ds[i].NhapThongTin();
	}
	
	for (int i=0; i<n;i++){
		ds[i].HienThiThongTin();
	}
	return 0;
}

