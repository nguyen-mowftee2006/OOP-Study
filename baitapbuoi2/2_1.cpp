#include <iostream>
using namespace std;

class Date {
    private:
        int d, m, y;
    public:
        void Nhap();
        void Xuat();
};
void Date::Nhap(){
    cout << "\n - Nhap thoi gian: "; cin >> d >> m >> y;
}
void Date::Xuat(){
    cout << " Ngay " << d << "/" << m << "/" <<y;
}
class XeHoi{
    private:
        char Hangsx[50];
        Date namsx;
        int giaban, soluong;
    public:
        void Nhap();
        void Xuat();
};
void XeHoi::Nhap(){
    cout << "\n - Nhap thong tin xe hoi: ";
    cout << "\n - Hang san xuat: "; cin.getline(Hangsx, 50);
    cout << "\n - Nam san xuat: "; namsx.Nhap();
    cout << "\n - Gia ban: "; cin >> giaban;
    cout << "\n - So luong ban: "; cin >> soluong;
}
void XeHoi::Xuat(){
    cout << "\n #Thong tin xe vua nhap: ";
    cout << "\n - Hang san xuat: " << Hangsx;
    cout << "\n - Nam san xuat"; namsx.Xuat();
    cout << "\n - Gia ban:" << giaban;
    cout << "\n - So luong ban: " << soluong;
}
int main()
{
    XeHoi a;
    a.Nhap();
    a.Xuat();
    return 0;
}