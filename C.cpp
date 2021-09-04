#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>


typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (auto& s : a)
		cin >> s;
	
	for (auto& s : b)
		cin >> s;

	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i] * b[i];
	}
	cout << ans;
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
