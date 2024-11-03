//Bai 1: CLASS Diem2D
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
	So May: 22
*/

#include "iostream"

using namespace std;


// ---KHAI BAO LOP
class Diem2D{
	// TP1: THUOC TINH - PRIVATE
	private: int x,y;

	// TP2: PHUONG THUC - PUBLIC
	public:
		// ham nhap xuat
		void Nhap();
		void Xuat();
		// constructor 
		Diem2D();
		Diem2D(int x1, int y1);
		~Diem2D(); // ham huy
		
		void setX(int x1);
		void setY(int y1);
		
		int getX();
		int getY();
		
		void TinhTien(int x1, int y1);
};
// khai bao cac chuong trinh con
// ham nhap xuat
void Diem2D::Nhap(){
	cout << " Nhap gia tri thu nhat = "; cin >> x;
	cout << " Nhap gia tri thu hai = "; cin >> y;
}
void Diem2D::Xuat(){
	cout << "\n X:"<< x<< " , ""Y:" << y << endl;
}

// constructor
Diem2D::Diem2D(){
	x = y = 0;
}
Diem2D::Diem2D(int x1, int y1){
	this->x = x1;
	this->y = y1;
}
// ham huy
Diem2D::~Diem2D(){
	cout << "Ham huy duoc tu dong goi: " << endl;
}
// ham cap nhat
void Diem2D::setX(int x){
	this->x = x;
}
void Diem2D::setY(int y){
	this->y = y;
}
// ham truy van
int Diem2D::getX(){
	return x;
}
int Diem2D::getY(){
	return y;
}
// ham tinh tien vector
void Diem2D::TinhTien(int x1, int y1){
	this->x+=x1;
	this->y+=y1;	
	
}

// chuong trinh chinh
int main(){
	Diem2D D1;
	D1.Nhap();
	D1.Xuat();
	D1.setX(5);
	D1.setY(10);
	cout << " Toa do sau khi thay doi: " << endl;
	cout <<"X = " << D1.getX() << endl;
	cout <<"Y = " << D1.getY() << endl;
	Diem2D D3(7,8);
	D3.Xuat();
	D3.setX(8);
	cout << " Toa do sau khi thay doi: " << endl;
	cout <<"X = " << D3.getX() << endl;
	cout <<"Y = " << D3.getY() << endl;
	return 0;
}
