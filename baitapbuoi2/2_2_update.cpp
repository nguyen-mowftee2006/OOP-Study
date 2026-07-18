// Kieu bai dung friend ko co phuong thuc cua hang hoa

#include <iostream>
using namespace std;

class HangHoa {
private:
  int maHang;
  char tenHang[50];
  long tienTra;
  friend class PhieuMuaHang;
};
// Co the su dung friend de thay the, nhung cach do kho bao tri code
class PhieuMuaHang {
private:
  int maPhieu;
  char tenKhach[30];
  int n;
  HangHoa *a;

public:
  void Nhap();
  void Xuat();
};
void PhieuMuaHang::Nhap() {
  cout << "\n - Nhap ma phieu: ";
  cin >> maPhieu;
  cin.ignore();
  cout << "\n - Ten khach hang: ";
  cin.getline(tenKhach, 30);
  cout << "\n - So luong hang hoa: ";
  cin >> n;
  cout << "\n - Danh sach hang hoa";
  a = new HangHoa[n];
  for (int i = 0; i < n; i++) {
    cout << "\n + Nhap hang hoa thu " << i + 1;
    cout << "\n - Ma hang hoa: ";
    cin >> a[i].maHang;
    cin.ignore();
    cout << "\n - Ten hang: ";
    cin.getline(a[i].tenHang, 50);
    cout << "\n - Tien tra: ";
    cin >> a[i].tienTra;
  }
}
void PhieuMuaHang::Xuat() {
  cout << "\n - Thong tin phieu mua hang: ";
  cout << "\n - Ma phieu: " << maPhieu;
  cout << "\n - Ten khach: " << tenKhach;
  cout << "\n #Danh sach hang hoa: ";
  long tongTien = 0;
  int dem = 0;
  for (int i = 0; i < n; i++) {
    cout << "\n - Ma hang: " << a[i].maHang;
    cout << "\n - Ten hang: " << a[i].tenHang;
    cout << "\n - Tien tra: " << a[i].tienTra;
    cout << "\n --------------------------------";
    ;
    tongTien += a[i].tienTra;
    if (a[i].tienTra > 250)
      dem++;
  }
  cout << "\n - TONG SO TIEN PHAI TRA: " << tongTien;
  cout << "\n - SO LUONG HANG HOA CO GIA > 250 LA: " << dem;
}
int main() {
  PhieuMuaHang x;
  x.Nhap();
  x.Xuat();
  return 0;
}