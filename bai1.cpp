#include <iostream>

using namespace std;

int main()
{
    string tenSinhvien, tenLop;
    cout<< "Nhap ten sinh vien : ";
    getline(cin,tenSinhvien);
    cout<< " Nhap ten lop: ";
    getline(cin,tenLop);
    cout << "Loi chao tieng Viet :X..."<<tenSinhvien<<",lop "<<tenLop<<endl;
    cout << "Loi chao tieng Anh :..."<<tenSinhvien<<",class "<<tenLop;

    return 0;
}