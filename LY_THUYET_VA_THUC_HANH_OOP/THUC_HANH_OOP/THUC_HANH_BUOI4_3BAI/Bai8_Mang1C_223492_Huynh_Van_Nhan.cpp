/*
	Ho va ten: Huynh Van Nhan
	lop: DH22TIN04
	MSSV: 223492
*/

#include <iostream>
using namespace std;

class Mang1C {
	private:
		int n;
		int *a;
	public:
		Mang1C() {
			n = 0;
			a = NULL;
		};
		void NhapMang();
		void InMang();
		int TimMax();
		int TimMin();
		int TongMang();
		void SapXepTang();
		void SapXepGiam();
};

void Mang1C::NhapMang() {
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void Mang1C::InMang() {

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void Mang1C::SapXepTang() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

void	Mang1C::SapXepGiam() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}


int Mang1C::TimMax() {
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int Mang1C::TimMin() {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

int Mang1C::TongMang() {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	Mang1C mang;
	mang.NhapMang();
	cout << "Mang vua nhap: ";
	mang.InMang();

	cout << "Phan tu lon nhat: " << mang.TimMax() << endl;
	cout << "Phan tu nho nhat: " << mang.TimMin() << endl;
	cout << "Tong cac phan tu: " << mang.TongMang() << endl;

	cout << "Mang sau khi sap xep tang dan: ";
	mang.SapXepTang();
	mang.InMang();

	cout << "Mang sau khi sap xep giam dan: ";
	mang.SapXepGiam();
	mang.InMang();

	return 0;
}
