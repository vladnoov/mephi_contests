#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>


typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;

int n;
ll dp[3000][3000];


void solve() {
	ll n;
	cin >> n;

	string ans = "";

	if (!n)
		ans = "0";

	while (n)
	{
		ans += (n % 2) + '0';
		n /= 2;
	}

	for (auto itr = ans.rbegin(); itr != ans.rend(); itr++) {
		cout << *itr;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
//	cin >> t;

	while (t--) {
		solve();
		cout << endl;
	}
}
