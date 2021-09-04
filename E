#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>


typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;

int n;
ll dp[3000][3000];


void solve() {
	int n;
	cin >> n;
	vector<ll> a(n), b(n);
	for (auto& s : a)
		cin >> s;

	sort(a.begin(), a.end());

	cout << a[n - 1] - a[0];
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
