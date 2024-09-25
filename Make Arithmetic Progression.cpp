#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int w = 0; w < q; w++)
    {
        int e, r, t;
        cin >> e >> r >> t;
        if(r - e == t - r) cout << 0;
        else cout << 1;
        cout <<"\n";
    }
}
