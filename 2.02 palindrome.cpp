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
	// USING STRINGSTREAM FOR INT TO STR CONVERSION
	// stringstream strm;
	// strm<<num;
	// string str;
	// strm>>str;
	string str = to_string(num);
	int isPali=1;
	for (int i=0; i<str.length()/2; i++){
		if (str[i] != str[str.length()-1-i]){
			isPali=0;
			break;
		}
	}
	if (isPali)
		cout<<"Palindrome";
	else
		cout<<"No";
}

/* TCs
3
512215
6589856
72
*/