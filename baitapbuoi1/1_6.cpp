#include <iostream>
using namespace std;

class HOCSINH {
private:
    char Hoten[50];
    int ngay, thang, nam;
    char gioitinh[10];
    float diemTB;
    char xepLoaiDD[20];
public:
    void NHAP();
    void XUAT();
};

void HOCSINH::NHAP()
{
    cout << "- Ho ten: "; cin.getline(Hoten, 50);
    cout << "- Ngay sinh (ngay thang nam): "; cin >> ngay >> thang >> nam;
    cin.ignore();
    cout << "- Gioi tinh: "; cin.getline(gioitinh, 10);
    cout << "- Diem trung binh: "; cin >> diemTB; cin.ignore();
    cout << "- Xep loai dao duc: "; cin.getline(xepLoaiDD, 20);
}

void HOCSINH::XUAT()
{
    cout << "Ho ten: " << Hoten << endl;
    cout << "Ngay sinh: " << ngay << "/" << thang << "/" << nam << endl;
    cout << "Gioi tinh: " << gioitinh << endl;
    cout << "Diem trung binh: " << diemTB << endl;
    cout << "Xep loai dao duc: " << xepLoaiDD << endl;
}

int main()
{
    HOCSINH a;
    a.NHAP();
    cout << "=== Thong tin hoc sinh ===" << endl;
    a.XUAT();
    return 0;
}
