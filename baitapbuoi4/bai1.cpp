#include <iostream>
#include <cstring>
using namespace std;

// ===== Lop TacGia =====
class TacGia {
public:
    char TenTacGia[50];
    char DiaChi_TG[100];

    void Nhap() {
        cout << "    Ten tac gia: "; cin.getline(TenTacGia, 50);
        cout << "    Dia chi tac gia: "; cin.getline(DiaChi_TG, 100);
    }
    void Xuat() {
        cout << "TG: " << TenTacGia << " (" << DiaChi_TG << ")";
    }
};

// ===== Lop NXB =====
class NXB {
public:
    char TenNXB[50];
    char DiaChi_NXB[100];

    void Nhap() {
        cout << "    Ten NXB: "; cin.getline(TenNXB, 50);
        cout << "    Dia chi NXB: "; cin.getline(DiaChi_NXB, 100);
    }
    void Xuat() {
        cout << "NXB: " << TenNXB << " (" << DiaChi_NXB << ")";
    }
};

// ===== Lop co so IDSACH =====
class IDSACH {
protected:
    char TenSach[50];
    int MaSach;
public:
    void Nhap() {
        cout << "  Ten sach: "; cin.getline(TenSach, 50);
        cout << "  Ma sach: "; cin >> MaSach; cin.ignore();
    }
    void Xuat() {
        cout << "Ma sach: " << MaSach << " - " << TenSach;
    }
    int getMaSach() const { return MaSach; }
};

// ===== Lop SACHGK ke thua IDSACH, aggregate TacGia va NXB =====
class SACHGK : public IDSACH {
private:
    TacGia x;
    NXB y;
public:
    void Nhap() {
        IDSACH::Nhap();
        cout << "  -- Tac gia --\n";
        x.Nhap();
        cout << "  -- Nha xuat ban --\n";
        y.Nhap();
    }
    void Xuat() {
        IDSACH::Xuat();
        cout << " | "; x.Xuat();
        cout << " | "; y.Xuat();
        cout << endl;
    }
    bool isNXB(const char* ten) const { return strcmp(y.TenNXB, ten) == 0; }
    bool isTacGia(const char* ten) const { return strcmp(x.TenTacGia, ten) == 0; }
};

int main() {
    int n;
    cout << "Nhap so luong sach giao khoa: ";
    cin >> n; cin.ignore();

    SACHGK *ds = new SACHGK[n];
    for (int i = 0; i < n; i++) {
        cout << "--- Sach thu " << i + 1 << " ---\n";
        ds[i].Nhap();
    }

    cout << "\n=== Danh sach sach giao khoa vua nhap ===\n";
    for (int i = 0; i < n; i++) ds[i].Xuat();

    cout << "\n=== Sach cua NXB KIMDONG hoac tac gia Pham Van At ===\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].isNXB("KIMDONG") || ds[i].isTacGia("Pham Van At"))
            ds[i].Xuat();
    }

    // Sap xep giam dan theo Ma sach (bubble sort)
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (ds[j].getMaSach() < ds[j + 1].getMaSach())
                swap(ds[j], ds[j + 1]);

    cout << "\n=== Danh sach sau khi sap xep giam dan theo ma sach ===\n";
    for (int i = 0; i < n; i++) ds[i].Xuat();

    delete[] ds;
    return 0;
}
