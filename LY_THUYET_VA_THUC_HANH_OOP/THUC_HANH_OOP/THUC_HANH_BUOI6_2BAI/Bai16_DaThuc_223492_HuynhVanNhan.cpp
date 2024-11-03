/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
*/

#include <iostream>
#include <vector>
using namespace std;

class DaThuc {
private:
    int Bac;
    vector<int> DoiSo;

public:
    DaThuc();
    ~DaThuc();
    void Nhap();
    void Xuat();
    DaThuc operator+(const DaThuc& dt);
    DaThuc operator-(const DaThuc& dt);
    DaThuc DaoHam();
};

DaThuc::DaThuc() : Bac(0) {}

DaThuc::~DaThuc() {}

void DaThuc::Nhap() {
    cout << "Nhap bac cua da thuc: ";
    cin >> Bac;
    DoiSo.resize(Bac + 1);
    for (int i = 0; i <= Bac; i++) {
        cout << "Nhap he so cho x^" << i << ": ";
        cin >> DoiSo[i];
    }
}

void DaThuc::Xuat() {
    for (int i = 0; i <= Bac; i++) {
        if (i > 0) {
            cout << " + ";
        }
        cout << DoiSo[i] << "x^" << i;
    }
    cout << endl;
}

DaThuc DaThuc::operator+(const DaThuc& dt) {
    DaThuc tong;
    tong.Bac = max(Bac, dt.Bac);
    tong.DoiSo.resize(tong.Bac + 1, 0);
    for (int i = 0; i <= Bac; i++) {
        tong.DoiSo[i] += DoiSo[i];
    }
    for (int i = 0; i <= dt.Bac; i++) {
        tong.DoiSo[i] += dt.DoiSo[i];
    }
    return tong;
}

DaThuc DaThuc::operator-(const DaThuc& dt) {
    DaThuc hieu;
    hieu.Bac = max(Bac, dt.Bac);
    hieu.DoiSo.resize(hieu.Bac + 1, 0);
    for (int i = 0; i <= Bac; i++) {
        hieu.DoiSo[i] += DoiSo[i];
    }
    for (int i = 0; i <= dt.Bac; i++) {
        hieu.DoiSo[i] -= dt.DoiSo[i];
    }
    return hieu;
}

DaThuc DaThuc::DaoHam() {
    DaThuc daoham;
    daoham.Bac = Bac - 1;
    daoham.DoiSo.resize(daoham.Bac + 1);
    for (int i = 1; i <= Bac; i++) {
        daoham.DoiSo[i - 1] = DoiSo[i] * i;
    }
    return daoham;
}

int main() {
    DaThuc dt1, dt2;
    cout << "Nhap da thuc thu nhat:\n";
    dt1.Nhap();
    cout << "Nhap da thuc thu hai:\n";
    dt2.Nhap();

    cout << "\nDa thuc thu nhat: ";
    dt1.Xuat();
    cout << "Da thuc thu hai: ";
    dt2.Xuat();

    DaThuc tong = dt1 + dt2;
    cout << "\nTong hai da thuc: ";
    tong.Xuat();

    DaThuc hieu = dt1 - dt2;
    cout << "Hieu hai da thuc: ";
    hieu.Xuat();

    DaThuc daoham = dt1.DaoHam();
    cout << "\nDao ham bac 1 cua da thuc thu nhat: ";
    daoham.Xuat();

    return 0;
}

