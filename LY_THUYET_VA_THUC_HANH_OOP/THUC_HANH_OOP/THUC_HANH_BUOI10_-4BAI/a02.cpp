/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Phuong_Tien{
	protected:
		int Do_dai_hanh_trinh;
		string Mauson;
	public:
		void Nhap();
		int get_Do_dai_hanh_trinh();
		string get_Mauson();
};

class Xe_khach: public Phuong_Tien{
	private:
		int So_cho_ngoi;
		long Don_gia; 
	public:
		Xe_khach();
		void Nhap();
		float Heso();
		long Gia_ve();
		void In1();
		void In2();
};

void Phuong_Tien::Nhap(){
	cout<<"Do dai hanh trinh (km): "; cin>>Do_dai_hanh_trinh;
	fflush(stdin);
	cout<<"Mau son: "; getline(cin, Mauson);
}

int Phuong_Tien::get_Do_dai_hanh_trinh(){
	return Do_dai_hanh_trinh;
}

string Phuong_Tien::get_Mauson(){
	return Mauson;
}

Xe_khach::Xe_khach(){
	Don_gia=500000;
}

void Xe_khach::Nhap(){
	Phuong_Tien::Nhap();
	do{
		cout<<"So cho ngoi (4, 7, 16): "; cin>>So_cho_ngoi;
	}while((So_cho_ngoi<4)||(So_cho_ngoi>4)&&(So_cho_ngoi<7)||(So_cho_ngoi>7)&&(So_cho_ngoi<16)||(So_cho_ngoi>16));
}

float Xe_khach::Heso(){
	if(So_cho_ngoi==16)
		return 1;
	else
		return 1.2;
}

long Xe_khach::Gia_ve(){
	if(Phuong_Tien::get_Do_dai_hanh_trinh()>700)
		return Don_gia*1.2*Heso();
	else
		return Don_gia*Heso();
}

void Xe_khach::In1(){
	cout<<setw(5)<<left<<"STT";
	cout<<setw(20)<<left<<"So cho ngoi";
	cout<<setw(20)<<left<<"Mau son";
	cout<<setw(20)<<left<<"Gia ve"<<endl;
}

void Xe_khach::In2(){
	cout<<setw(20)<<left<<So_cho_ngoi;
	cout<<setw(20)<<left<<Phuong_Tien::get_Mauson();
	cout<<setw(20)<<left<<Gia_ve()<<endl;
}

int main(){
	int n, i, j;
	do{
		cout<<"Nhap so luong phuong tien: "; cin>>n;
	}while(n<0);
	cout<<endl;
	Xe_khach a[n], b;
	for(i=0; i<n; i++){
		cout<<"Nhap phuong tien thu "<<i+1<<":"<<endl;
		a[i].Nhap();
		cout<<endl;
	}
	cout<<endl;
	b.In1();
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i].Gia_ve()<a[j].Gia_ve()){
				Xe_khach temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	for(i=0; i<n; i++){
		cout<<setw(5)<<left<<i+1;
		a[i].In2();
	}
	return 0;
}

