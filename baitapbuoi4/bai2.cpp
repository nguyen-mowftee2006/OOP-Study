#include <iostream>
#include <cstring>
using namespace std;

// ===== Lop co so HANG =====
class HANG {
protected:
    int Ma_Hang;
    char Ten_Hang[50];
    float Gia;
public:
    void Nhap() {
        cout << "    Ma hang: "; cin >> Ma_Hang; cin.ignore();
        cout << "    Ten hang: "; cin.getline(Ten_Hang, 50);
        cout << "    Gia: "; cin >> Gia; cin.ignore();
    }
    void Xuat() {
        cout << "Ma hang: " << Ma_Hang << " - Ten: " << Ten_Hang << " - Gia: " << Gia;
    }
};

// ===== Lop HANG_MM ke thua HANG =====
class HANG_MM : public HANG {
private:
    char Chat_Lieu[30];
    char Kieu_Dang[30];
    int So_Luong;
public:
    void Nhap() {
        HANG::Nhap();
        cout << "    Chat lieu: "; cin.getline(Chat_Lieu, 30);
        cout << "    Kieu dang: "; cin.getline(Kieu_Dang, 30);
        cout << "    So luong: "; cin >> So_Luong; cin.ignore();
    }
    void Xuat() {
        HANG::Xuat();
        cout << " - Chat lieu: " << Chat_Lieu
             << " - Kieu dang: " << Kieu_Dang
             << " - So luong: " << So_Luong << endl;
    }
    int getSoLuong() const { return So_Luong; }
};

// ===== Lop CUAHANG, aggregate mang HANG_MM =====
class CUAHANG {
private:
    int Ma_cua_hang;
    char Ten_cua_hang[50];
    HANG_MM *x;
    int n;
public:
    CUAHANG() : x(nullptr), n(0) {}

    void Nhap() {
        cout << "Ma cua hang: "; cin >> Ma_cua_hang; cin.ignore();
        cout << "Ten cua hang: "; cin.getline(Ten_cua_hang, 50);
        cout << "So luong mat hang may mac: "; cin >> n; cin.ignore();
        x = new HANG_MM[n];
        for (int i = 0; i < n; i++) {
            cout << "--- Hang may mac thu " << i + 1 << " ---\n";
            x[i].Nhap();
        }
    }
    void Xuat() {
        cout << "Ma cua hang: " << Ma_cua_hang << " - Ten cua hang: " << Ten_cua_hang << endl;
        cout << "Danh sach hang may mac:\n";
        for (int i = 0; i < n; i++) x[i].Xuat();
    }
    void SuaTen(const char* tenmoi) {
        strncpy(Ten_cua_hang, tenmoi, 49);
        Ten_cua_hang[49] = '\0';
    }
    void HienThiSoLuongLon(int soLuong) {
        cout << "Hang may mac co so luong > " << soLuong << ":\n";
        for (int i = 0; i < n; i++)
            if (x[i].getSoLuong() > soLuong) x[i].Xuat();
    }
    ~CUAHANG() { delete[] x; }
};

int main() {
    CUAHANG ch;
    ch.Nhap();

    cout << "\n=== Thong tin cua hang vua nhap ===\n";
    ch.Xuat();

    // Sua ten cua hang thanh IVYMODA
    ch.SuaTen("IVYMODA");
    cout << "\n=== Thong tin cua hang sau khi sua ten ===\n";
    ch.Xuat();

    cout << "\n=== Hang may mac co so luong > 25 ===\n";
    ch.HienThiSoLuongLon(25);

    return 0;
}
