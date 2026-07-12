#include <iostream>
using namespace std;

class SINVIEN {
private:
    char MSV[20];
    char HoTen[50];
    int tuoi;
    double diem;
public:
    void Nhap();
    void Xuat();
};

void SINVIEN::Nhap()
{
    cout<<"\n ---Vui long nhap cac thong tin ben duoi---";

    cout<<"\n - Ma sinh vien: ";fflush(stdin); gets(MSV);
    cout<<"\n - Ho va ten: ";fflush(stdin); gets(HoTen);
    cout<<"\n - Tuoi: ";cin >> tuoi;
    cout<<"\n - Diem: ";cin >> diem;
}

void SINVIEN::Xuat()
{
    cout<<"\n #Thong tin sinh vien ";
    cout<<"\n Ma sinh vien: "<<MSV;
    cout<<"\n Ho va ten: "<<HoTen;
    cout<<"\n Tuoi: "<<tuoi;
    cout<<"\n Diem: "<<diem;
}

int main()
{
    cout<<"\n Bien dich thanh cong!";
    SINVIEN a, b;
    a.Nhap(); a.Xuat();
    cout<<"---------------------------------";
    b.Nhap(); b.Xuat();
    return 0;
}