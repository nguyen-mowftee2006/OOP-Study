#include <iostream>
using namespace std;
#define PI 3.14159

class HINHTRON {
private:
    float bankinh;
public:
    void NHAP();
    float CHUVI();
    float DIENTICH();
};

void HINHTRON::NHAP()
{
    cout << "- Ban kinh: "; cin >> bankinh;
}

float HINHTRON::CHUVI()
{
    return 2 * PI * bankinh;
}

float HINHTRON::DIENTICH()
{
    return PI * bankinh * bankinh;
}

int main()
{
    HINHTRON ht;
    ht.NHAP();
    cout << "Chu vi: " << ht.CHUVI() << endl;
    cout << "Dien tich: " << ht.DIENTICH() << endl;
    return 0;
}
