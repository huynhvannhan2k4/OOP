/*
Do Khoa Trang
226182
DH22TIN04
*/
#include"iostream"
#include"iomanip"
#include"cstring"
using namespace std;

class CongDan{
		char MaID[30], Ho_ten[30];
	public:
		void Nhap(){
			fflush(stdin);
			cout<<"MaID: "; gets(MaID);
			cout<<"Ho ten: "; gets(Ho_ten);
		}
		char* get_MaID(){
			return MaID;
		}
		char* get_Ho_ten(){
			return Ho_ten;
		}
};
class ThueBao: public CongDan{
		char SDT[20];
		char Dia_chi[30];
	public:
		void Nhap(){
			CongDan::Nhap();
			fflush(stdin);
			cout<<"So dien thoai: "; gets(SDT);
			cout<<"Dia chi: "; gets(Dia_chi);
		}
		void In1(){
			cout<<setw(20)<<left<<"MaID";
			cout<<setw(20)<<left<<"Ho ten";
			cout<<setw(30)<<left<<"So dien thoai";
			cout<<setw(20)<<left<<"Dia chi"<<endl;
		}
		void In2(){
			cout<<setw(20)<<left<<CongDan::get_MaID();
			cout<<setw(20)<<left<<CongDan::get_Ho_ten();
			cout<<setw(30)<<left<<SDT;
			cout<<setw(20)<<left<<Dia_chi<<endl;
		}
		char* get_SDT(){
			return SDT;
		}
};
int main(){
	int n, i, kt=0, temp;
	char x[20];
	do{
		cout<<"Nhap so luong cong dan: "; cin>>n;
	}while(n<0);
	cout<<endl;
	ThueBao a[n], b;
	for(i=0; i<n; i++){
		cout<<"Nhap thong tin cong dan thu "<<i+1<<":"<<endl;
		a[i].Nhap();
		cout<<endl;
	}
	cout<<endl;
	cout<<setw(5)<<left<<"STT";
	b.In1();
	for(i=0; i<n; i++){
		cout<<setw(5)<<left<<i+1;
		a[i].In2();
	}
	cout<<endl;
	cout<<"Nhap so dien thoai can tim: "; gets(x);
	for(i=0; i<n; i++){
		if(strcmp(a[i].get_SDT(), x)== 0){
			kt=1;
			temp= i;
			break;
		}
	}
	cout<<endl;
	if(kt== 1){
		b.In1();
		a[temp].In2();
	}else
		cout<<"Khong co so can tim!";
	return 0;
}
