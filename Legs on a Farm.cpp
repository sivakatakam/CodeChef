#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int w = 0; w < q; w++)
    {
        int e, r;
        cin >> e;
        r = e % 4;
        if(r == 0) cout << e / 4;
        else cout << (e / 4) + 1;
        cout << "\n";
    }
}
