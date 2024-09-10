#include <bits/stdc++.h>

using namespace std;
int main()
{
    int select;
    float doC, doF;
    cout << "a. Chuyen do C sang F" << endl;
    cout << "b. Chuyen do F sang do C" << endl;
    cout<<"Chon a hoac b: "<<endl;
    cin >> select;
    if (select == 1)
    {
        cout << "Nhap do C:" <<doC<< endl;
        cin >> doC;
        doF = (9.0/5 * doC) + 32;
        cout << "Do F:" << doF <<doF<< endl;
       
    }
    else
    {
        cout << "Nhap do F" << endl;
        cin >> doF;
        doC = (doF - 32) * (5.0/9);
        cout << "Do C" << doC << endl;
    }

return 0;
}