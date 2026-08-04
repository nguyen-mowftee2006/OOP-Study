#include <bits/stdc++.h>
using namespace std;

class PERSON
{
protected:
    char name[50], birth[20], address[100];
public:
    PERSON()
    {
        this->name[0] = '\0'; this->birth[0] = '\0'; this->address[0] = '\0';
    }
    void input()
    {
        cout << "\nNhap ho ten: "; fflush(stdin); gets(name);
        cout << "\nNhap ngay sinh: "; fflush(stdin); gets(birth);
        cout << "\nNhap dia chi: "; fflush(stdin); gets(address);
    }
    void output()
    {
        cout << "\nHo ten: " << name;
        cout << "\nNgay sinh: " << birth;
        cout << "\nDia chi: " << address;
    }
};

class SCHOOL
{
private:
    char name[50], date[20];
    friend class FACULTY;
    friend class STUDENT;
};

class FACULTY
{
private:
    char name[50], date[20];
    SCHOOL x;
public:
    void input()
    {
        cout << "\nNhap ten khoa: "; fflush(stdin); gets(name);
        cout << "\nNhap ngay thanh lap khoa: "; fflush(stdin); gets(date);
        cout << "\nNhap ten truong: "; fflush(stdin); gets(x.name);
        cout << "\nNhap ngay thanh lap truong: "; fflush(stdin); gets(x.date);
    }
    void output()
    {
        cout << "\nTen khoa: " << name;
        cout << "\nNgay thanh lap khoa: " << date;
        cout << "\nTen truong: " << x.name;
        cout << "\nNgay thanh lap truong: " << x.date;
    }
    friend class STUDENT;
};

class STUDENT : public PERSON
{
private:
    FACULTY y;
    char lop[20];
    float score;
public:
    STUDENT()
    {
        this->lop[0] = '\0'; this->score = 0;
    }
    void input()
    {
        PERSON::input();
        y.input();
        cout << "\nNhap lop: "; fflush(stdin); gets(lop);
        cout << "\nNhap diem: "; cin >> score;
    }
    void output()
    {
        PERSON::output();
        y.output();
        cout << "\nLop: " << lop;
        cout << "\nDiem: " << score;
    }
    void SUA() { strcpy(y.x.name, "DHCNHN"); }
};

int main()
{
    STUDENT a;
    cout << "NHAP THONG TIN SINH VIEN";
    a.input();
    a.SUA();
    cout << "\nTHONG TIN SINH VIEN";
    a.output();
    return 0;
}
