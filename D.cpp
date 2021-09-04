#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;

void solve() {
	vector<unsigned long long> a(3);
for (auto & s : a)
cin >> s;
sort(a.begin(), a.end());
cout << a[2];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	//cin >> t;

	while (t--) {
		solve();
		cout << endl;
	}
}
