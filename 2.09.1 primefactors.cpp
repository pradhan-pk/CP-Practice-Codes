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
	int num;
	cin>>num;
	if (num<=1) return;
	while (num%2==0)	{cout<<2<<" "; num=num/2;}
	while (num%3==0)	{cout<<3<<" "; num=num/3;}
	for (int i=5; i*i<=num; i+=6){
		while (num%i==0)	{cout<<i<<" "; num=num/i;}
		while (num%(i+2)==0)	{cout<<i+2<<" "; num=num/(i+2);}
	}
	if (num>3) cout<<num;
	cout<<endl;
}

/* TCs
O(sqrt (n))
	3
	119
	180
	64
*/