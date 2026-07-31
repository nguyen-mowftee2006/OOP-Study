#include <iostream>
#include <cstring>
using namespace std;

// ===== Lop co so NHANSU =====
class NHANSU {
protected:
    char hoten[50];
    char gioitinh[5];
    int ngay, thang, nam; // namsinh: ngay/thang/nam
    char diachi[100];
public:
    void nhap() {
        cout << "  Ho ten: "; cin.getline(hoten, 50);
        cout << "  Gioi tinh: "; cin.getline(gioitinh, 5);
        cout << "  Ngay sinh (ngay thang nam): "; cin >> ngay >> thang >> nam; cin.ignore();
        cout << "  Dia chi: "; cin.getline(diachi, 100);
    }
    void xuat() {
        cout << hoten << " | " << gioitinh << " | "
             << ngay << "/" << thang << "/" << nam << " | " << diachi;
    }
};

// ===== Lop CONGCHUC ke thua NHANSU =====
class CONGCHUC : public NHANSU {
private:
    char nganhnghe[20];
    int namvaoCQ;
    char trinhdo[50];
    float hsluong;
    float phcap;
public:
    void nhap() {
        NHANSU::nhap();
        cout << "  Nganh nghe: "; cin.getline(nganhnghe, 20);
        cout << "  Nam vao co quan: "; cin >> namvaoCQ; cin.ignore();
        cout << "  Trinh do: "; cin.getline(trinhdo, 50);
        cout << "  He so luong: "; cin >> hsluong; cin.ignore();
        cout << "  Phu cap: "; cin >> phcap; cin.ignore();
    }
    void xuat() {
        NHANSU::xuat();
        cout << " | " << nganhnghe << " | vao CQ nam: " << namvaoCQ
             << " | " << trinhdo << " | he so luong: " << hsluong
             << " | phu cap: " << phcap
             << " | thu nhap: " << thunhap() << endl;
    }
    float thunhap() {
        return hsluong * 830 + phcap;
    }
};

int main() {
    const int MAX = 50;
    CONGCHUC ds[MAX];
    int n;

    cout << "Nhap so luong cong chuc (<=50): ";
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "--- Cong chuc thu " << i + 1 << " ---\n";
        ds[i].nhap();
    }

    cout << "\n=== Danh sach cong chuc vua nhap ===\n";
    for (int i = 0; i < n; i++) ds[i].xuat();

    // Tim cong chuc co thu nhap thap nhat
    int idxMin = 0;
    for (int i = 1; i < n; i++)
        if (ds[i].thunhap() < ds[idxMin].thunhap()) idxMin = i;

    cout << "\n=== Cong chuc co thu nhap thap nhat ===\n";
    ds[idxMin].xuat();

    // Sap xep giam dan theo thu nhap (bubble sort)
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (ds[j].thunhap() < ds[j + 1].thunhap())
                swap(ds[j], ds[j + 1]);

    cout << "\n=== Danh sach cong chuc sau khi sap xep giam dan theo thu nhap ===\n";
    for (int i = 0; i < n; i++) ds[i].xuat();

    return 0;
}
