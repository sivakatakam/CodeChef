#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q, w;
    cin >> q >> w;
    if(q > w) cout << "DECREASED";
    else if (q < w) cout << "INCREASED";
    else cout << "SAME";
}
