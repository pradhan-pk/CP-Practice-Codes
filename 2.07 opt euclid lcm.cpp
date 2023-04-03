//Code by pradhan-pk
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
	int c=a,d=b;
	int res=min(a,b);
	if (res==0)	cout<<0;
	while(a%b!=0){
		res=a%b;
		a=b;
		b=res;
	}
	cout<<c*d/res;
}

/* TCs
3
4 6
27 3
15 13
*/