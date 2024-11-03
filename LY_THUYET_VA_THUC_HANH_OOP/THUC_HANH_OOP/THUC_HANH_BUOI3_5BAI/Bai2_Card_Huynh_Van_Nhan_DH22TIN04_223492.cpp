/*	
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
	May:32
	Bai 2: lop Card
*/
#include "iostream"
#include "string"
using namespace std;
class Card{
	string TuaDeSach, TacGia;
	int SoLuong;
	public:
		void Nhap();
		void In();
		int getSoLuong();
};
void Card::Nhap(){
	fflush(stdin);
	cout<<"Tua De: "; getline(cin,TuaDeSach);
	cout<<"Tac Gia: "; getline(cin,TacGia);
	cout<<"So Luong Sach: "; cin>>SoLuong;
}
void Card::In(){
	cout<<"Tua De: "<<TuaDeSach<<"\nTac Gia: "<<TacGia<<"\nSo Luong Sach: "<<SoLuong<<endl;
}
int Card::getSoLuong(){
	return SoLuong;
}
int main(){
	int n;
	cout<<"Nhap so luong cuon sach: "; cin>>n;
	Card cd[n];
	for(int i=0;i<n;i++){
		cd[i].Nhap();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		cd[i].In();
		cout<<endl;
	}
	int temp=cd[0].getSoLuong();
	Card cd1;
	for(int i=1;i<n;i++){
		if(temp<cd[i].getSoLuong()) {
			temp=cd[i].getSoLuong();
			cd1=cd[i];
		}
	}
	cout<<"Cuon sach co so luong lon nhat:"<<endl;
	cd1.In();
	return 0;
}
