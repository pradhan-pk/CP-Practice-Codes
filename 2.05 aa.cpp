#include <bits/stdc++.h>
using namespace std;
void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    /*is Single Test case?*/ cin >> t;
    while (t--) {
        solve();
        cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
        cout<<"\n";
    }
    return 0;
}

void solve()
{
    int a,b;
    cin>>a>>b;
    int c=max(a,b), d=min(a,b);
    int res=d;
    // cout<<c<<d;
    // int count =0;
    while (c%res!=0 || d%res!=0){
        res=c%d;
        c=d;
        d=res;
    }
    cout<<res;     //GCD
    cout<<" "<<a*b/res;     //LCM
}

/* TCs

*/