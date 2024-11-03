//Bai 1: CLASS DIEM THUA KE

/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
	So May: 22
*/

#include "iostream"
#include "string"
using namespace std;

class Diem{
	// TP1: THUOC TINH - PRIVATE
	private: int x,y;

	// TP2: PHUONG THUC - PUBLIC
	public:
		void ganDiem(int, int);
		void hienThi();
		void doiDiem(int, int);
};
class DiemMau:public Diem{
	private:
		int mau;
//bo sung them thuoc tinh mau cho lop DiemMau
	public:
		void ganDM(int, int, int);
		void hienThiDM();
};



void Diem::ganDiem(int h, int t){
	x=h; y=t;
}
void Diem::hienThi(){
	cout << "("<<x<<", "<<y<<")";
}
void Diem::doiDiem(int dx, int dy){
	x+=dx; y+=dy;
}

// @@@@


void DiemMau::ganDM(int h, int t, int m){
	ganDiem(h,t);
	mau = m;
}
void DiemMau::hienThiDM(){
	hienThi();
	cout<<", mau = "<<mau;
}




int main(){
	DiemMau d1;
	d1.ganDM(2, 3, 7);
	d1.hienThiDM();
	cout<<endl;
	d1.doiDiem(1, 2);
	d1.hienThiDM();
	return 0;
}
