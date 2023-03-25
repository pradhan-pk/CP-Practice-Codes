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

bool isPrime(int n){
	if (n==1) return false;
	if (n==2 || n==3) return true;
	if (n%2==0 || n%3==0) return false;
	for (int i=5; i*i<=n; i+=6){
		if (n%i==0 || n%(i+2)==0){
			return false;
			break;
		}
	}
	return true;
}

void solve()
{
	int num;
	cin>>num;
	for (int i=2; i<=num; i++){
		if (isPrime(i)){
			int x=i;
			while (num%x==0){
				cout<<i<<" ";
				x*=i;
			}
		}
	}
}

/* TCs

*/