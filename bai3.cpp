#include <bits/stdc++.h>

using namespace std;
int main()
{
    float C, S, R;
    const float PI = 3.1416;
    cout << "Nhap ban kinh : ";
    cin >> R;
    C = 2 * R * PI;
    S = PI * pow(R, 2);
    cout << "C= " << C << endl;
    cout << "S= " << S;
    return 0;
}