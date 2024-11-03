// BAI 3: VIET HAM DE THUC HIEN TIM UOC CHUNG LON NHAT VA BOI CHUNG NHO NHAT DUOC NHAP TU BAN PHIM 2 SO A,B
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include "iostream"
#include <math.h>
using namespace std;


// HAM TIM UCLN
int ucln(int a, int b){
   if(a == 0 || b == 0){
      return a + b;
   }
   while(a != b){
      if(a > b){
         a = a - b;
      }
      else{
         b = b - a;
      }
   }
   return a;
}
// HAM TIM BCNN
int bcnn(int a, int b){
   return a * b / ucln(a, b);
}

int main(){
	int a,b;
	cout << "Nhap vao he so a= "; cin >> a;
	cout << "Nhap vao he so b= "; cin >> b;
	cout << "Uoc chung lon nhat cua a va b = " << ucln(a,b) << endl;
	cout << "Boi chung nho nhat cua a va b = " << bcnn(a,b) << endl;
}
