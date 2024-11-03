/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
	May:32
	Bai 5: Lop TamGiac
*/
#include "iostream"
#include "string"
#include "math.h"
using namespace std;
// ---KHAI BAO LOP
class TamGiac{
	// TP1: THUOC TINH - PRIVATE
	private:
			double a,b,c;
	// TP2: PHUONG THUC - PUBLIC
	public:
		TamGiac(double aa=0,double bb=0,double cc=0){
			a=aa;
			b=bb;
			c=cc;
		}
		void Nhap();
		void Xuat();
		int HopLe();
		void PhanLoai();
		double ChuVi();
		double DienTich();
};
// Cac chuong trinh con
// Ham Nhap
void Nhap();
void Xuat();
int HopLe();
void PhanLoai();
double ChuVi();
double DienTich();

// Chuong trinh chinh
int main(){
		TamGiac TG;
		TG.Nhap();
		TG.Xuat();
		cout<<endl;
		if (TG.HopLe()==1){
			cout<<"3 canh tam giac hop le";
			cout<<endl;
			TG.PhanLoai();
			cout<<"\nChu vi tam giac: "<<TG.ChuVi();  
			cout<<"\nDien tich tam giac: "<<TG.DienTich();
		}
		else
			cout<<"3 canh tam giac khong hop le";	
}
void TamGiac::Nhap(){
		cout<<"Nhap 3 canh tam giac \n";
		cout<<"Nhap canh a= "; cin>>a;
		cout<<"Nhap canh b= "; cin>>b;
		cout<<"Nhap canh c= "; cin>>c;
	
}

void TamGiac::Xuat(){
		cout<<"=============Thong tin tam giac================= \n";      
		cout<<"Canh a= "<<a<<", Canh b= "<<b<<", Canh c= "<<c;
}
int TamGiac::HopLe(){
		if ((a+b>c)&&(b+c>a)&&(c+a>b)&&(a>0)&&(b>0)&&(c>0))      
			return 1;      
		else 
			return 0;
}
void TamGiac::PhanLoai(){
	if (((a!=b)&&(a!=c))||((b!=a)&&(b!=c))||((c!=a)&&(c!=b))){
		 if ((a==b)||(b==c)||(c==a))       
		 	cout<<"Tam giac can";        
		 else if ((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))          
		 	cout<<"Tam giac vuong";      
		 else 
		 	cout<<"Tam giac thuong";     
		 
	}else 
		cout<<"Tam giac deu";
		
}
double TamGiac::ChuVi(){      
	double p;      
	p=a+b+c;      
	return p;
}  
double TamGiac::DienTich(){      
	double p,s;      
	p=(a+b+c)/2; 
	s=sqrt(p*(p-a)*(p-b)*(p-c));      
	return s;    
}
