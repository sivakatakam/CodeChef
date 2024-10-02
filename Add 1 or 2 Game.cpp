#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int w = 0; w < q; w++)
    {
        int e;
        cin >> e;
        if(e == 1) cout << "Alice";
        else cout << "Bob";
        cout << "\n";
    }
}
