#include <iostream>
using namespace std;

class HangHoa{
    private:
        int maHang;
        char tenHang[50];
        long tienTra;
    public:
        void Nhap();
        void Xuat();
        long getTienTra();
};
void HangHoa::Nhap(){
    cout << "\n - Ma hang hoa: "; cin >> maHang;
    cin.ignore();
    cout << "\n - Ten hang: "; cin.getline(tenHang, 50);
    cout << "\n - Tien tra: "; cin >> tienTra;
}
void HangHoa::Xuat(){
    cout << "\n - Ma hang: " << maHang;
    cout << "\n - Ten hang: " << tenHang;
    cout << "\n - Tien tra: " << tienTra;
    cout << "\n --------------------------------";
} 
// Co the su dung friend de thay the, nhung cach do kho bao tri code
long HangHoa::getTienTra(){
    return tienTra;
}
class PhieuMuaHang{
    private:
        int maPhieu;
        char tenKhach[30];
        int n;
        HangHoa *a;
    public:
        void Nhap();
        void Xuat();
};
void PhieuMuaHang::Nhap(){
    cout << "\n - Nhap ma phieu: "; cin >> maPhieu; cin.ignore();
    cout << "\n - Ten khach hang: "; cin.getline(tenKhach, 30);
    cout << "\n - So luong hang hoa: "; cin >> n;
    cout << "\n - Danh sach hang hoa";
    a = new HangHoa[n];
    for (int i=0; i<n;i++){
        cout << "\n + Nhap hang hoa thu " << i + 1;
        a[i].Nhap(); 
    }
}
void PhieuMuaHang::Xuat(){
    cout << "\n - Thong tin phieu mua hang: ";
    cout << "\n - Ma phieu: " << maPhieu;
    cout << "\n - Ten khach: " << tenKhach;
    cout << "\n #Danh sach hang hoa: ";
    long tongTien = 0;
    int dem = 0;
    for (int i=0;i<n;i++){
        a[i].Xuat();
        tongTien += a[i].getTienTra();
        if (a[i].getTienTra() > 250) dem++;
    }
    cout << "\n - TONG SO TIEN PHAI TRA: " << tongTien;
    cout << "\n - SO LUONG HANG HOA CO GIA > 250 LA: " << dem;
}
int main(){
    PhieuMuaHang x;
    x.Nhap();
    x.Xuat();
    return 0;
}