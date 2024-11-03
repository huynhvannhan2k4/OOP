/*
	MSSV:223492
	LOP: DH22TIN04
	HO VA TEN: HUYNH VAN NHAN

*/
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	// HO VA TEN
    string name;
    // GIOI TINH
    string gioitinh;
    // NGAY SINH
    string birthday;
public:
    Person(string name = "", string gioitinh = "",string birthday = "");
    ~Person();
    void Input();
    void Output();
};
// THEM THUOC TINH DIEM THI, LOP 

class Person_Student : public Person {
private:
    string lop;
    float diemthi;
public:
    void Input();
    void Output();
};
// 
Person::Person(string name, string gioitinh, string birthday) : name(name), gioitinh(gioitinh), birthday(birthday) {}

Person::~Person() {}

void Person::Input() {
    cout << "===========NHAP THONG TIN PERSON STUDENT===========" << endl;
    
    cout << "\n NHAP TEN PERSON STUDENT: ";
    getline(cin, name);
    
    cout << "\n NHAP GIOI TINH PERSON STUDENT: ";
    getline(cin, gioitinh);
    
    cout << "\n NHAP BIRTHDAY PERSON STUDENT: ";
    getline(cin, birthday);
}

void Person::Output() {
    cout << "===========THONG TIN PERSON STUDENT VUA NHAP===========" << endl;
    cout << "\n TEN PERSON STUDENT: " << name;
    cout << "\n GIOI TINH PERSON STUDENT: " << gioitinh;
    cout << "\n BIRTHDAY PERSON STUDENT: " << birthday;
}

void Person_Student::Input() {
    Person::Input();
    cout << "\n HOC LOP: ";
    getline(cin,lop);
    cout << "\n DIEM THI: ";
    cin >> diemthi;
    cin.ignore();
}

void Person_Student::Output() {
    Person::Output();
    cout << "\n THUOC LOP: " << lop << endl;
    cout << "\n DIEM THI: " << diemthi << endl;
}

int main() {
    int n;
    cout << "NHAP SO SINH VIEN N= ";
    cin >> n;
    cin.ignore();
    Person_Student a[n];
    for (int i = 0; i < n; i++) {
        cout << "SINH VIEN THU: " << (i + 1) << ": \n";
        a[i].Input();
    }
    cout << "THONG TIN VUA NHAP: \n";
    for (int i = 0; i < n; i++)
        a[i].Output();

    return 0;
}

