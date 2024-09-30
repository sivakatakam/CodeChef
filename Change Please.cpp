#include<bits/stdc++.h>
#include<cmath>

using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int w = 0; w < q; w++)
    {
        float e, r;
        cin >> e;
        r = ceil(e / 10);
        cout << 100 - (r * 10) << "\n";
    }
}
