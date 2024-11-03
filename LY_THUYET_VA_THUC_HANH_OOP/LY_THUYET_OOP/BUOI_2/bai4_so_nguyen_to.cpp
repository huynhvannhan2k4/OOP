// BAI 4: VIET HAM KIEM TRA SO NGUYEN TO , XUAT RA SO NGUYEN TO NH? HON N
/*
	Ho Va Ten: Huynh Van Nhan
	MSSV: 223492
	Lop: DH22TIN04
*/

#include <iostream>
#include <math.h>
using namespace std;

// ham kiem tra so nguyen to
int Kiem_tra_SNT(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = (int) sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
// Ham chinh
int main() {
	int i, n;
 	cout << "Nhap n="; cin >> n;
 	if (Kiem_tra_SNT(n))
 		cout << n << "La so nguyen to " << endl;
 	else
 		cout << n << " khong La so nguyen to " << endl;
 	cout << "Tat ca cac so nguyen to nho hon "<<n<< " la: ";
    if (n >= 2) {
        cout << "2 ";
    }
    for (i = 3; i < n; i+=2) {
        if (Kiem_tra_SNT(i) == 1) {
            cout << i <<" ";
        }
    }
}
