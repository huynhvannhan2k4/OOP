#include <iostream>
#include <string>
using namespace std;

class vienChuc {
protected:
    string maSo_vienChuc;
    string hoTen_vienChuc;
    int chucVu_vienChuc;
public:
    vienChuc(string maSo_vienChuc = "", string hoTen_vienChuc = "", int chucVu_vienChuc = -1);
    ~vienChuc();
    void Input();
    void Output();
};

class bienChe : public vienChuc {
private:
    float heSoluong;
public:
    void Input();
    void Output();
    long tienLuong(); // Override hàm tinhLuong
};

class hopDong : public vienChuc {
private:
    int soNgaylamviec;
public:
    void Input();
    void Output();
    long tienLuong(); // Override hàm tinhLuong
};

vienChuc::vienChuc(string maSo_vienChuc, string hoTen_vienChuc, int chucVu_vienChuc) : maSo_vienChuc(maSo_vienChuc), hoTen_vienChuc(hoTen_vienChuc), chucVu_vienChuc(chucVu_vienChuc) {}

vienChuc::~vienChuc() {}

void vienChuc::Input() {
    cout << "===========NHAP THONG TIN VIEN CHUC===========" << endl;
    cout << "\n NHAP MA SO VIEN CHUC: ";
    getline(cin, maSo_vienChuc);
    cout << "\n NHAP HO VA TEN: ";
    getline(cin, hoTen_vienChuc);
    cout << "\n GIAM DOC NHAP 1, PHO GIAM DOC NHAP 0, CAC CHUC VU KHAC NHAP -1: " << endl;
    cout << "\n MOI BAN NHAP: ";
    cin >> chucVu_vienChuc;
}

void vienChuc::Output() {
    cout << "\n===========THONG TIN VIEN CHUC DA NHAP===========" << endl;
    cout << "\nMA SO VIEN CHUC: " << maSo_vienChuc <<"\t HO VA TEN: " << hoTen_vienChuc << "\t CHUC VU: " << chucVu_vienChuc << endl;
}

void bienChe::Input(){
    vienChuc::Input();
    cout << "\n NHAP HE SO LUONG CUA BAN: ";
    cout << "\n NEU BAC DAI HOC 2.34, THAC SY 2.67: ";
    cin >> heSoluong;
    cin.ignore();
}

long bienChe::tienLuong(){
    long LCB = heSoluong * 1,490,000;
    long PCCV = (chucVu_vienChuc == 1) ? 150,000 : (chucVu_vienChuc == 0) ? 100,000 : 0;
    long BHXH = 0.05 * LCB;
    return LCB + PCCV - BHXH;
}

void bienChe::Output(){
    vienChuc::Output();
    cout <<"\n HE SO LUONG CUA BAN:" << heSoluong << endl;
    cout <<"\n TIEN LUONG BIEN CHE: " << tienLuong() << endl;
}

void hopDong::Input(){
    vienChuc::Input();
    cout << "\n NHAP SO NGAY LAM VIEC TRONG THANG CUA BAN: ";
    cin >> soNgaylamviec;
    cin.ignore();
} 

long hopDong::tienLuong() {
    long tienTangGio = (soNgaylamviec > 26) ? (soNgaylamviec - 26) * 100,000 : (26 - soNgaylamviec) * 50,000;
    long BHXH = 0.05 * 1,500,000;
    return 1,500,000 + tienTangGio - BHXH;
}

void hopDong::Output(){
    vienChuc::Output();
    cout <<"\n SO NGAY LAM VIEC TRONG THANG:" << soNgaylamviec << endl;
    cout <<"\n TIEN LUONG HOP DONG: " << tienLuong() << endl;
}

int main() {
    int BC;
    cout << "\t NHAP SO VIEN CHUC TRONG BIEN CHE: ";
    cin >> BC;
    cin.ignore();
    bienChe BC1[BC];
    for (int i = 0; i < BC; i++) {
        cout << "\nVIEN CHUC THU: " << (i + 1) << ": \n";
        BC1[i].Input();
    }
    cout << "\n THONG TIN VIEN CHUC TRONG BIEN CHE VUA NHAP: \n";
    for (int i = 0; i < BC; i++) {
        cout << "\nVIEN CHUC THU: " << (i + 1) << ": \n";
        BC1[i].Output();
    }

    int HD;
    cout << "\n\t NHAP SO VIEN CHUC TRONG HOP DONG: ";
    cin >> HD;
    cin.ignore();
    hopDong HD1[HD];
    for (int i = 0; i < HD; i++) {
        cout << "\nVIEN CHUC THU: " << (i + 1) << ": \n";
        HD1[i].Input();
    }

    cout << "\n THONG TIN VIEN CHUC TRONG HOP DONG VUA NHAP: \n";
    for (int i = 0; i < HD; i++) {
        cout << "\nVIEN CHUC THU: " << (i + 1) << ": \n";
        HD1[i].Output();
    }
    
    return 0;
}

