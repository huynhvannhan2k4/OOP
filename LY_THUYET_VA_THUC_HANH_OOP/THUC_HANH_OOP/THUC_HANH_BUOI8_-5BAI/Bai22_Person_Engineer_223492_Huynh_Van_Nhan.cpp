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
    string name;
    string birthday;
    string places;
public:
    Person(string name = "", string birthday = "", string places = "");
    ~Person();
    void Input();
    void Output();
};

class Engineer : public Person {
private:
    string majors;
    int graduationyear;
public:
    void Input();
    void Output();
    int getgraduationyear();
};

Person::Person(string name, string birthday, string places) : name(name), birthday(birthday), places(places) {}

Person::~Person() {}

void Person::Input() {
    cout << "===========NHAP THONG TIN KHACH HANG===========" << endl;
    cout << "\n NHAP TEN PERSON: ";
    getline(cin, name);
    cout << "\n NHAP BIRTHDAY PERSON: ";
    getline(cin, birthday);
    cout << "\n NHAP PLACES PERSON: ";
    getline(cin, places);
}

void Person::Output() {
    cout << "===========THONG TIN PERSON===========" << endl;
    cout << "\n TEN PERSON: " << name;
    cout << "\n BIRTHDAY PERSON: " << birthday;
    cout << "\n PLACES PERSON: " << places;
}

void Engineer::Input() {
    Person::Input();
    cout << "\nNGANH HOC: ";
    getline(cin, majors);
    cout << "\nNAM TOT NGHIEP: ";
    cin >> graduationyear;
    cin.ignore();
}

void Engineer::Output() {
    Person::Output();
    cout << "NGANH HOC: " << majors << endl;
    cout << "NAM TOT NGHIEP: " << graduationyear << endl;
}

int Engineer::getgraduationyear() {
    return graduationyear;
}

int main() {
    int n;
    cout << "n= ";
    cin >> n;
    cin.ignore();
    Engineer a[n];
    for (int i = 0; i < n; i++) {
        cout << "KY SU THU " << (i + 1) << ": \n";
        a[i].Input();
    }
    cout << "THONG TIN VUA NHAP: \n";
    for (int i = 0; i < n; i++)
        a[i].Output();

    int Max = a[0].getgraduationyear();
    for (int i = 0; i < n; i++)
        if (a[i].getgraduationyear() > Max)
            Max = a[i].getgraduationyear();

    cout << "KY SU CO NAM TOT NGHIEP GAN NHAT LA: \n";
    for (int i = 0; i < n; i++)
        if (a[i].getgraduationyear() == Max)
            a[i].Output();

    return 0;
}

