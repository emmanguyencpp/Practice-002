#include <bits/stdc++.h>

using namespace std;
int main()
{
    float giaSanPham, phanTramChietKhau, giaSale;
    cout << "Nhap gia san pham: ";
    cin >> giaSanPham;
    cout << "Phan tram chiet khau :";
    cin >> phanTramChietKhau;
    giaSale = giaSanPham - (phanTramChietKhau * giaSanPham);
    cout << "Gia da chiet khau: " << giaSale << endl;

    return 0;
}