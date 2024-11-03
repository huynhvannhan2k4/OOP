/*	
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
	May:32
	Bai 3: lop CDCaNhac
*/

#include "iostream"
#include "string"
using namespace std;
class CDCaNhac{
	string TenDia;
	int SoLuong, GiaTien;
	public:
		void Nhap();
		void In();
		int getSoLuong();
};
void CDCaNhac::Nhap(){
	fflush(stdin);
	cout<<"Ten Dia Nhac: "; getline(cin,TenDia);
	cout<<"So Luong Dia: "; cin>>SoLuong;
	cout<<"Gia Tien: "; cin>>GiaTien;
}
void CDCaNhac::In(){
	cout<<"Ten Dia Nhac: "<<TenDia<<"\nSo Luong Dia: "<<SoLuong<<"\nGia Tien: "<<GiaTien<<endl;
}
int CDCaNhac::getSoLuong(){
	return SoLuong;
}
int main(){
	int n;
	cout<<"Nhap so luong Dia Nhac: "; cin>>n;
	CDCaNhac Dia[n];
	for(int i=0;i<n;i++){
		Dia[i].Nhap();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		Dia[i].In();
		cout<<endl;
	}
	int temp=Dia[0].getSoLuong();
	CDCaNhac Dia1;
	for(int i=1;i<n;i++){
		if(temp<Dia[i].getSoLuong()) {
			temp=Dia[i].getSoLuong();
			Dia1=Dia[i];
		}
	}
	cout<<"Dia CDCaNhac co so luong bai hat lon nhat "<<endl;
	Dia1.In();
	return 0;
}
