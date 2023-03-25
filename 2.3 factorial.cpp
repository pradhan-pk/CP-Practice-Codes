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

int fact(int n){
	if (n==1 || n==0)
		return 1;
	return n*fact(n-1);
}

void solve()
{
	int n;
	cin>>n;
	cout<<fact(n);
}

/* TCs
	3
	4
	6
	10
*/