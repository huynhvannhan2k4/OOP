// BAI 2: SU DUNG NGON NGU C++ DE GIAI VA BIEN LUAN PHUONG TRINH BAC 2
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include "iostream"
#include <math.h>
using namespace std;

int main(){
	float a,b,c,x,x1,x2,denta;
	cout << "Nhap vao he so a= "; cin >> a;
	cout << "Nhap vao he so b= "; cin >> b;
	cout << "Nhap vao he so c= "; cin >> c;

	if(a!=0){
		denta =(float)((b*b)-4*a*c);
		if(denta>0){
			x1= (-b+(sqrt(denta)))/(2*a);
			x2= (-b-(sqrt(denta)))/(2*a);
			cout << "Phuong trinh co nghiem x1 = " << x1 << endl;
			cout << "Phuong trinh co nghiem x1 = " << x2 << endl;
		}
		else if(denta==0){
			x= (float)(-b/(2*a));
			cout << "Phuong trinh co nghiem kep la: " << x << endl;
		}
		else
			 cout << "Phuong trinh vo nghiem !" << endl;
	}
	else{
	cout << "Phuong trinh bac 1 " << endl;
		x= (float)(-c/b);
		cout << "Phuong trinh co nghiem la: " << x << endl;
	}
	return 0;
}
