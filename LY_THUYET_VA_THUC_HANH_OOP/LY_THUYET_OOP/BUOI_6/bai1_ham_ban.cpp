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

class Diem{
	// TP1: THUOC TINH - PRIVATE
	private: int x,y;

	// TP2: PHUONG THUC - PUBLIC
	public:
		Diem Cong(Diem);
		Diem Tru(Diem);
		Diem Nhan(Diem);
		Diem Chia(Diem);
		Diem(int = 0 ,int = 0);
		void NhapDiem();
		void InDiem();
		friend istream& operator >> (istream&, Diem&);
		friend ostream& operator << (ostream&, Diem&);
};

// CAC CHUONG TRINH CON

Diem Diem::Cong(Diem d){
	Diem kq;
	kq.x = x + d.x;
	kq.y = y + d.y;	
	return kq;
}
Diem Diem::Tru(Diem d){
	Diem kq;
	kq.x = x - d.x;
	kq.y = y - d.y;	
	return kq;
}
Diem Diem::Nhan(Diem d){
	Diem kq;
	kq.x = x * d.x;
	kq.y = y * d.y;	
	return kq;
}
Diem Diem::Chia(Diem d){
	Diem kq;
	kq.x = x / d.x;
	kq.y = y / d.y;	
	return kq;
}
// Ham nhap diem vao >>
void Diem::NhapDiem(){
	cout << " Nhap diem thu nhat = "; cin >> x;
	cout << " Nhap diem thu hai = "; cin >> y;
}
// Ham in diem ra <<
void Diem::InDiem(){
	cout << "\n X:"<<x<< ",""Y:" << y << endl;
}
// Ham constuction
Diem::Diem(int x, int y){
	this->x = x;
	this->y = y;
}

istream& operator >> (istream& is, Diem& d){
	cout<<"Nhap hoanh do: ";
	is>>d.x;
	cout<<"Nhap tung do: ";
	is>>d.y;
	return is;
}
ostream& operator << (ostream& os, Diem& d){
	os<<"("<<d.x<<", "<<d.y<<")";
	return os;
}
// CHUONG TRINH CHINH
int main(){
	Diem d1(2,4); // constuction
	d1.InDiem();
	//
	Diem d2;
	d2.NhapDiem();
	d2.InDiem();
	//
	Diem d3;
	d3 = d1.Cong(d2);
	cout << "\n Toa do 2 doi tuong sau khi cong la: " << endl;
	d3.InDiem();
	//
	Diem d4;
	d4 = d2.Tru(d1);
	cout << "\n Toa do 2 doi tuong sau khi tru la: " << endl;
	d4.InDiem();
	//
	Diem d5;
	d5 = d1.Nhan(d2);
	cout << "\n Toa do 2 doi tuong sau khi Nhan la: " << endl;
	d5.InDiem();
	//
	Diem d6;
	d6 = d1.Chia(d2);
	cout << "\n Toa do 2 doi tuong sau khi Chia la: " << endl;
	d6.InDiem();
	//
	Diem d7(10,20);
	Diem d8;
	cout << "Diem d7: "<< d7 << endl;
	cout << "Diem d8: "<< d8 << endl;
	return 0;
	
}
