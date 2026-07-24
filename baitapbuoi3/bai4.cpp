#include <iostream>
#include <cstring>
using namespace std;

class HocSinh {
public:
    char hoTen[50], queQuan[50];
    int tuoi;
    float diemToan, diemLy, diemHoa;

    HocSinh() {
        strcpy(hoTen, "Chua co ten");
        tuoi = 0;
        strcpy(queQuan, "Chua ro");
        diemToan = diemLy = diemHoa = 0;
    }

    HocSinh(const char *hoTen, int tuoi, const char *queQuan,
            float diemToan, float diemLy, float diemHoa) {
        strcpy(this->hoTen, hoTen);
        this->tuoi = tuoi;
        strcpy(this->queQuan, queQuan);
        this->diemToan = diemToan;
        this->diemLy = diemLy;
        this->diemHoa = diemHoa;
    }

    void xuat() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "Que quan: " << queQuan << endl;
        cout << "Diem toan: " << diemToan << endl;
        cout << "Diem ly: " << diemLy << endl;
        cout << "Diem hoa: " << diemHoa << endl;
    }
};

int main() {
    HocSinh a;
    HocSinh b("Nguyen Van B", 18, "Ha Noi", 8.5, 7.0, 9.0);

    cout << "-- Hoc sinh A --\n";
    a.xuat();

    cout << "\n-- Hoc sinh B --\n";
    b.xuat();

    return 0;
}
