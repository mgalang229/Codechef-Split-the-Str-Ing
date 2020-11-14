#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		char c=s[n-1];
		int cnt=0;
		for(int i=0; i<n-1; ++i)
			if(s[i]==c)
				cnt++;
		cout << (cnt!=0?"YES":"NO") << "\n";
	}
}
