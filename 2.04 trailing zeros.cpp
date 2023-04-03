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
	int n;
	cin >> n;
	// cout << n/5 + n/25 + n/125 + n/625;
	int div=5, zeros=0;
	while(n>=div){
		zeros += n/div;
		div = div*5;
	}
	cout << zeros;
}

/* TCs
3
4
27
10
*/