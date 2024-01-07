#include<bits/stdc++.h>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;

void solve( ){


}

int main(){

    int n, m, a[100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int s(0);
    for (int i = 0; i < m; ++i)
    {
        if (a[i] >= 0)
        {
            break;
        }
        s += a[i];
    }
    cout << -s << endl;
    return 0;
}


