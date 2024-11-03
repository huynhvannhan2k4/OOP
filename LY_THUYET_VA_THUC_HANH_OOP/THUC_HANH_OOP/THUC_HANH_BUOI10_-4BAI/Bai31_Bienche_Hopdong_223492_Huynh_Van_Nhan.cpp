/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Lop co so Canbo
class Canbo {
    protected:
        string Maso, Hoten;
        int Chucvu;
    public:
        void Nhap();
        string get_Hoten();
        int PCCV();
};

void Canbo::Nhap() {
    cin.ignore();
    cout << "MA SO: "; getline(cin, Maso);
    cout << "HO VA TEN: "; getline(cin, Hoten);
    do {
        cout << "CHUC VU [GIAM DOC(0), PHO GIAM DOC(1), CHUC VU KHAC(2)]: "; cin >> Chucvu;
    } while (Chucvu < 0 || Chucvu > 2);
}

string Canbo::get_Hoten() {
    return Hoten;
}

int Canbo::PCCV() {
    if (Chucvu == 0)
        return 150000;
    else if (Chucvu == 1)
        return 100000;
    else
        return 0;
}

// Lop dan xuat Bienche
class Bienche : public Canbo {
    private:
        float Hesoluong;
    public:
        Bienche();
        void Nhap();
        float Hsl();
        long luong_coban();
        long BH();
        long Tien_luong();
        void In();
};

Bienche::Bienche() {
    Hesoluong = 2.34;
}

void Bienche::Nhap() {
    Canbo::Nhap();
    cout << "HE SO LUONG: "; cin >> Hesoluong;
}

float Bienche::Hsl() {
    return Hesoluong;
}

long Bienche::luong_coban() {
    return Hesoluong * 1490000;
}

long Bienche::BH() {
    return 0.05 * luong_coban();
}

long Bienche::Tien_luong() {
    return luong_coban() + PCCV() - BH();
}

void Bienche::In() {
    cout << setw(20) << left << Hoten;
    cout << setw(20) << left << Hsl();
    cout << setw(20) << left << Tien_luong() << endl;
}

// Lop dan xuat Hopdong
class Hopdong : public Canbo {
    private:
        int So_ngay_lam;
    public:
        void Nhap();
        long Tientanggio();
        long BH();
        long Tien_luong();
        void In();
};

void Hopdong::Nhap() {
    Canbo::Nhap();
    cout << "SO NGAY LAM VIEC: "; cin >> So_ngay_lam;
}

long Hopdong::Tientanggio() {
    if (So_ngay_lam > 26)
        return (So_ngay_lam - 26) * 100000;
    else
        return (So_ngay_lam - 26) * 50000;
}

long Hopdong::BH() {
    return 0.05 * 1500000;
}

long Hopdong::Tien_luong() {
    return 1500000 + Tientanggio() - BH();
}

void Hopdong::In() {
    cout << setw(20) << left << Hoten;
    cout << setw(20) << left << So_ngay_lam;
    cout << setw(20) << left << Tien_luong() << endl;
}

// Ham main
int main() {
    int n;
    cout << "\t NHAP SO LUONG CAN BO BIEN CHE: "; cin >> n;
    Bienche *a = new Bienche[n];
    for (int i = 0; i < n; i++) {
        cout << "\nNHAP THONG TIN CAN BO BIEN CHE THU: " << i + 1 << ":" << endl;
        a[i].Nhap();
        cout << endl;
    }
    cout << "\t BANG DANH SACH TIEN LUONG CAN BO BIEN CHE" << endl;
    cout << setw(20) << left << "HO VA TEN";
    cout << setw(20) << left << "HE SO LUONG";
    cout << setw(20) << left << "TIEN LUONG" << endl;
    for (int i = 0; i < n; i++) {
        a[i].In();
    }
    cout << endl;
    cout << "\t NHAP SO LUONG CAN BO HOP DONG: "; cin >> n;
    Hopdong *b = new Hopdong[n];
    for (int i = 0; i < n; i++) {
        cout << "\n NHAP THONG TIN CAN BO HOP DONG THU: " << i + 1 << ":" << endl;
        b[i].Nhap();
        cout << endl;
    }
    cout << "\t BANG DANH SACH TIEN LUONG CAN BO HOP DONG" << endl;
    cout << setw(20) << left << "HO VA TEN";
    cout << setw(20) << left << "SO NGAY LAM VIEC";
    cout << setw(20) << left << "TIEN LUONG" << endl;
    for (int i = 0; i < n; i++) {
        b[i].In();
    }
    delete[] a;
    delete[] b;
    return 0;
}

