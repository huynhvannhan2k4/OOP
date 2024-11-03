//Bai 1: CLASS DIEM
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
	So May: 22
*/

#include "iostream"
#include "string"
using namespace std;
// ---KHAI BAO LOP
class Diem{
	// TP1: THUOC TINH - PRIVATE
	private: int x,y;

	// TP2: PHUONG THUC - PUBLIC
	public:
		void NhapDiem();
		void InDiem();
		
//		void KhoiTao(); // khoi tao khong co doi so
//		void KhoiTao(int ); // khoi tao mot doi so
//		void KhoiTao(int , int ); // khoi tao du doi so
		
		void KhoiTao(int = 0, int = 0); // ham khoi tao tham so mac nhien
		
//		Diem(); // Ham xay dung khong co doi so constuction (ham tao)
//		Diem(int ); // Ham xay dung thieu mot doi so constuction (ham tao)
//		Diem(int ,int ); // Ham xay dung du doi so constuction (ham tao)
		Diem(int = 0 ,int = 0);
		~Diem(); // Ham huy destruction
		
		// 
		void setX(int x);
		void setY(int y);
		int getX();
		int getY();
};


void Diem::NhapDiem(){
	cout << " Nhap diem thu nhat = "; cin >> x;
	cout << " Nhap diem thu hai = "; cin >> y;
}
void Diem::InDiem(){
	cout << "\n X:"<< x<< " AND ""Y:" << y << endl;
}

//--- Cac ham khoi tao cac dang
// khoi tao khong co doi so
//void Diem::KhoiTao(){
//	x=0;
//	y=0;
//}
//// khoi tao mot doi so
//void Diem::KhoiTao(int h){
//	x=h;
//	y=0;
//}
// khoi tao du doi so
void Diem::KhoiTao(int h, int t){
	x=h;
	y=t;
}

//---- Cac ham constuction (ham tao)

// Ham xay dung khong co doi so constuction (ham tao)
//Diem::Diem(){
//	x = y = 0;
//}
//// Ham xay dung thieu mot doi so constuction (ham tao)
//Diem::Diem(int x){
//	this->x = x;
//	this->y = 0;
//}
// Ham xay dung du doi so constuction (ham tao)
Diem::Diem(int x, int y){
	this->x = x;
	this->y = y;
}
Diem::~Diem(){
	cout << "Ham huy duoc tu dong goi: " << endl;
}
//--- cac dang new
//void Diem::KhoiTao(int x, int y){
//	this->x = x;
//	this->y = y;
//}

//
void Diem::setX(int x){
	this->x = x;
}
void Diem::setY(int y){
	this->y = y;
}

//
int Diem::getX(){
	return x;
}
int Diem::getY(){
	return y;
}

// CHUONG TTRINH CHINH
int main(){
	// Bien tinh
//	Diem d;
//	d.NhapDiem();
//	d.InDiem();
	
	// Bien con tro
//	Diem *pd;
//	pd = new Diem;
//	pd->NhapDiem();
//	pd->InDiem();
//	delete pd;
	// Dang 3:
Diem d1;
d1.KhoiTao();
d1.InDiem();

Diem d2;
d2.KhoiTao(3);
d2.InDiem();

Diem d3;
d3.KhoiTao(3,7);
d3.InDiem();

Diem d4;
d4.InDiem();

Diem d5(1);
d5.InDiem();

Diem d6(3,-5);
d6.InDiem();

d6.setX(1);
d6.setY(2);

cout << " Toa do sau khi thay doi: " << endl;
cout <<"X = " << d6.getX() << endl;
cout <<"Y = " << d6.getY() << endl;

	return 0;
}
