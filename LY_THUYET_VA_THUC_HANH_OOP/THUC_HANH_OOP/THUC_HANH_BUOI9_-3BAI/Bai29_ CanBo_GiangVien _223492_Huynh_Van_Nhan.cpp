/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
using namespace std;

class Can_Bo {
    protected:
        string Ma_CanBo;
        string Ma_DonVi;
        string Nam_Sinh;
        float HeSoLuong;
        long PhuCapAn;
        long BaoHiem;
        long Luong1;
    public:
        Can_Bo(string Ma_CanBo = "",string Ma_DonVi = "", string Nam_Sinh = "", float HeSoLuong = 0, long PhuCapAn = 0, long BaoHiem = 0);
        ~Can_Bo();
        void Input();
        void Output();
        long Luong();
};

class Giang_Vien : public Can_Bo {
    private:
        int DH;
    public:
        void Input();
        void Output();
};

Can_Bo::Can_Bo (string Ma_CanBo, string Ma_DonVi, string Nam_Sinh, float HeSoLuong, long PhuCapAn, long BaoHiem) : Ma_CanBo(Ma_CanBo), Ma_DonVi(Ma_DonVi), Nam_Sinh(Nam_Sinh) ,HeSoLuong(HeSoLuong),PhuCapAn(PhuCapAn),BaoHiem(BaoHiem){}

Can_Bo::~Can_Bo() {}

void Can_Bo::Input() {
    cout << "===========NHAP THONG TIN CAN BO===========" << endl;
    cout << "\n NHAP MA CAN BO: ";
    getline(cin, Ma_CanBo);
    cout << "\n NHAP MA DON VI: ";
    getline(cin, Ma_DonVi);
    cout << "\n NHAP NAM SINH: ";
    getline(cin, Nam_Sinh);
    cout << "\n NHAP HE SO LUONG: ";
    cin >> HeSoLuong;
    cout << "\n NHAP PHU CAP AN: ";
    cin >> PhuCapAn;
    cout << "\n NHAP BAO HIEM: ";
    cin >> BaoHiem;
    
}

long Can_Bo::Luong(){
    long LuongCS = 1500000;
    Luong1 = LuongCS * HeSoLuong + PhuCapAn + ((1500000/100)*25) - BaoHiem;
    return Luong1;
}

void Can_Bo::Output() {
    cout << "\n===========THONG TIN CAN BO DA NHAP===========" << endl;
    cout << "\nMA CAN BO: " << Ma_CanBo <<"\t MA DON VI: " << Ma_DonVi << "\t NAM SINH: " << Nam_Sinh <<"\t HE SO LUONG: " << HeSoLuong << "\t PHU CAP AN: " << PhuCapAn << "\t BAO HIEM: " << BaoHiem << endl;
    cout << "\n LUONG: " << Luong() << endl;
}


void Giang_Vien::Input(){
    Can_Bo::Input();
    cout << "\n NEU NEU CO DOC HAI NHAP 1 , KHONG CO DOC HAI NHAP 0: ";
    cin >> DH;
    cin.ignore();
} 

void Giang_Vien::Output(){
    Can_Bo::Output();
    if (DH == 1)
        cout << "\n TONG LUONG CUA BAN LA: " <<  Luong1 + ((1500000/100)*10);
    else
        cout << "\n TONG LUONG CUA BAN LA: " << Luong1;    
}

int main() {
    int n;
    cout << "\t NHAP SO GIANG VIEN N= ";
    cin >> n;
    cin.ignore();
    Giang_Vien* a = new Giang_Vien[n];
    for (int i = 0; i < n; i++) {
        cout << "\nGIANG VIEN THU: " << (i + 1) << ": \n";
        a[i].Input();
    }

    cout << "\n THONG TIN VUA NHAP: \n";
    for (int i = 0; i < n; i++) {
        cout << "\nGIANG VIEN THU: " << (i + 1) << ": \n";
        a[i].Output();
    }

    delete[] a;
    return 0;
}

