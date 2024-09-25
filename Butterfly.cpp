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
        if(e <= r + t && r <= e + t && t <= e + r) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}
