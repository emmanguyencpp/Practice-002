#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b;
    cout << "Canh goc vuong thu nhat: ";
    cin >> a;
    cout << "Canh goc vuong thu hai: ";
    cin >> b;
    float canhHuyen = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Canh huyen = " << canhHuyen << endl;

    return 0;
}