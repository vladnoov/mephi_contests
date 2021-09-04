#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>


typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;

int gcd(ll a, ll b)
{
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}

void solve() {
	ll n, m;
	cin >> n >> m;
	cout << gcd(n, m);
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
