#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q[6];
    for(int i = 0; i < 6; i++)
    {
        cin >> q[i];
    }
    cout << max(q[0], q[1]) + max(q[2], q[3]) + max(q[4], q[5]);
}
