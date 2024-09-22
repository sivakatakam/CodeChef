#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q, w, e;
    cin >> q >> w >> e;
    if(abs(q - w) <= e) cout << "YES";
    else cout << "NO";
}
