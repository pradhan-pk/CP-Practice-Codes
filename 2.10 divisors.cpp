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
	int i,n;
	cin >> n;
	for (i=1; i*i<n; i++)
		if (n%i==0)	cout<<i<<" ";
	for (; i>=1; i--)
		if (n%i==0)	cout<<n/i<<" ";
}

/* TCs
	3
	119
	180
	64
*/