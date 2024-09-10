#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x, y;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    float F = pow(x, 5) + 5 * pow(x, 5.0 / 3) - 6;
    float G = x * y - pow(x, 2) + x * pow(y, 2) - pow(y, 3);
    cout << "F= " << F << endl;
    cout << "G= " << G;

    return 0;
}