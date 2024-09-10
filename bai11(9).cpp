#include <bits/stdc++.h>

using namespace std;
int main()
{
    int gio, giay;
    cout << "Nhap so gio: ";
    cin >> gio;

    giay = gio * 60;
    gio = 60 * giay;
    cout << "So giay tuong ung :" << giay << endl;

    return 0;
}