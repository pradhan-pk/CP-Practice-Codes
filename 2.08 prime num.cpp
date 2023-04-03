//Code by pradhan-pk
#include <bits/stdc++.h>
using namespace std;
int solve();

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

int solve()
{
	int n;
	cin>>n;
	if (n==1){
		cout<<"false1";
		return 1;
	}
	if (n==2 || n==3){
		cout<<"true2";
		return 0;
	}
	if (n%2==0 || n%3==0){
		cout<<"false3";
		return 0;
	}
	for (int i=5; i*i<=n; i+=6){
		if (n%i==0){
			cout<<"false4";
			return 1;
		}
	}
	cout<<"true5";
	return 0;

}

/* TCs
3
3
23
33
*/