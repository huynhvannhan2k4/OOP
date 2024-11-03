#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Ve{
		int Do_dai_hanh_trinh;
		string Diem_di, Diem_den, So_hieu;
	public:
		void Nhap();
		string get_Sohieu();
		string get_Diemdi();
		string get_Diemden();
		int get_Do_dai_hanh_trinh();
};

class Ve_tauhoa: public Ve{
		int Hang_ghe;
		long Don_gia; 
	public:
		Ve_tauhoa(){
			Don_gia=1000000;
		}
		void Nhap();
		int get_hangghe();
		float Heso();
		long Gia_ve();
		void In1();
		void In2();
};

void Ve::Nhap(){
	cout<<"So hieu: "; getline(cin, So_hieu);
	cout<<"Diem di: "; getline(cin, Diem_di);
	cout<<"Diem den: "; getline(cin, Diem_den);
	cout<<"Do dai hanh trinh (km): "; cin>>Do_dai_hanh_trinh;
}

string Ve::get_Sohieu(){
	return So_hieu;
}

string Ve::get_Diemdi(){
	return Diem_di;
}

string Ve::get_Diemden(){
	return Diem_den;
}

int Ve::get_Do_dai_hanh_trinh(){
	return Do_dai_hanh_trinh;
}

void Ve_tauhoa::Nhap(){
	Ve::Nhap();
	do{
		cout<<"Hang ghe (1, 2): "; cin>>Hang_ghe;
	}while((Hang_ghe<1)||(Hang_ghe>2));
}

int Ve_tauhoa::get_hangghe(){
	return Hang_ghe;
}

float Ve_tauhoa::Heso(){
	if(Hang_ghe==2)
		return 1;
	else
		return 1.2;
}

long Ve_tauhoa::Gia_ve(){
	if(Ve::get_Do_dai_hanh_trinh()>1200)
		return Don_gia*1.2*Heso();
	else
		return Don_gia*Heso();
}

void Ve_tauhoa::In1(){
	cout<<setw(5)<<left<<"STT";
	cout<<setw(20)<<left<<"So Hieu";
	cout<<setw(20)<<left<<"Diem di";
	cout<<setw(20)<<left<<"Diem den";
	cout<<setw(20)<<left<<"Hang ghe";
	cout<<setw(20)<<left<<"Gia ve"<<endl;
}

void Ve_tauhoa::In2(){
	cout<<setw(20)<<left<<Ve::get_Sohieu();
	cout<<setw(20)<<left<<Ve::get_Diemdi();
	cout<<setw(20)<<left<<Ve::get_Diemden();
	cout<<setw(20)<<left<<get_hangghe();
	cout<<setw(20)<<left<<Gia_ve()<<endl;
}

int main(){
	int n, i, j;
	do{
		cout<<"Nhap so luong Ve: "; cin>>n;
	}while(n<0);
	cout<<endl;
	Ve_tauhoa a[n], b;
	for(i=0; i<n; i++){
		cout<<"Nhap thong tin ve thu "<<i+1<<":"<<endl;
		a[i].Nhap();
		cout<<endl;
	}
	cout<<endl;
	b.In1();
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i].Gia_ve()>a[j].Gia_ve()){
				Ve_tauhoa temp;
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

