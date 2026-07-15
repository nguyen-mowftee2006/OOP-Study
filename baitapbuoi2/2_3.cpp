#include <iostream>
using namespace std;

class date{
    private: 
        int d,m,y;
    public:
        void Nhap();
        void Xuat();
};
void date::Nhap(){
    cout << "\n - Nhap ngay: "; cin >> d >> m >> y;
}
void date::Xuat(){
    cout << "\n - Ngay lap phieu: " << d << "/" << m << "/" << y;
}
class hanghoa{
    private:
        char mahang[10], tenhang[30];
        int dongia, soluong;
    public:
        void Nhap();
        void Xuat();
        long thanhtien();
};
void hanghoa::Nhap(){
    cout << "\n - Nhap ma hang: "; cin.getline(mahang, 10);
    cout << "\n - Ten hang: "; cin.getline(tenhang, 30);
    cout << "\n - Don gia: "; cin >> dongia;
    cout << "\n - So luong mua: "; cin >> soluong; cin.ignore();
}
void hanghoa::Xuat(){
    cout << "\n - Ma hang: " << mahang;
    cout << "\n - Ten hang: " << tenhang;
    cout << "\n - Don gia: " << dongia;
    cout << "\n - So luong: " << soluong;
}
long hanghoa::thanhtien(){
    return dongia*soluong;
}
class phieumuahang{
    private:
        char maphieu[10], manlp[20], tennlp[50], tenkh[50];
        date a; int sovatpham; hanghoa *b;
    public:
        void Nhap();
        void Xuat();
};
void phieumuahang::Nhap(){
    cout << "\n - NHAP THONG TIN VAO PHIEU SAU: ";
    cout << "\n - Ma phieu: "; cin.getline(maphieu, 10);
    cout << "\n - Ngay lap phieu: "; a.Nhap();cin.ignore();
    cout << "\n - Ma nguoi lap phieu: "; cin.getline(manlp, 20);
    cout << "\n - Ten nguoi lap phieu: "; cin.getline(tennlp, 50);
    cout << "\n - Ten khach hang: "; cin.getline(tenkh, 50);
    cout << "\n #DANH SACH HANG HOA!!!!";
    cout << "\n #Nhap so luong vat pham!!!"; cin >> sovatpham;cin.ignore();
    b = new hanghoa[sovatpham];
    for(int i=0; i<sovatpham ; i++)
    {
        cout << "===========================================";
        cout << "\n #Nhap hang hoa thu "<<i+1;
        b[i].Nhap();
    }
}
void phieumuahang::Xuat(){
    long tongtien = 0;
    int dem = 0;
    cout << "\n  ================== THONG TIN PHIEU ================";
    cout << "\n - Ma phieu: " << maphieu;
    cout << "\n - Ngay lap phieu: " ;a.Xuat();
    cout << "\n - Ma nguoi lap phieu: " << manlp;
    cout << "\n - Ten nguoi lap phieu: " << tennlp;
    cout << "\n - Ten khach hang: " << tenkh;
    cout << "\n ======== DANH SACH VAT PHAM DA MUA ========";
    for(int i=0; i<sovatpham;i++){
        cout << "\n ----------- Hang hoa thu " << i+1 << " -----------";
        b[i].Xuat(); tongtien += b[i].thanhtien();
    }
    cout << "\n #TONG SO TIEN PHAI THANH TOAN: " << tongtien;
}
int main(){
    phieumuahang c;
    c.Nhap();
    c.Xuat();
    return 0;
}