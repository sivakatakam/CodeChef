#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q, w, e, r;
    cin >> q >> w >> e >> r;
    int t = q * w * e;
    int y = r * r * r;
    if(t > y) cout << "Cuboid";
    else if(t < y) cout << "Cube";
    else cout << "Equal";
}
