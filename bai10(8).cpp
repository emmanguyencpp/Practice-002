#include <bits/stdc++.h>

using namespace std;
int main()
{
    float s, v, t, vtb;
    cout << "Nhap quang duong :";
    cin >> s;
    cout << "Nhap van toc:  ";
    cin >> v;
    cout << "Nhap thoi gian: ";
    cin >> t;

    s = v * t;
    vtb = s / t;

    cout << "Van toc trung binh la: " << vtb << endl;

    return 0;
}