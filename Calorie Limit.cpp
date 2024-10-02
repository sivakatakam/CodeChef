#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n, k, s = 0, c = 0;
        cin >> n >> k;
        int a[n];
        for(int j = 0 ; j < n; j++)
        {
            cin >> a[j];
        }
        for(int z = 0; z < n; z++)
        {
            s += a[z];
            if(s > k) break;
            else c++;
        }
        cout << c << "\n";
    }
}
