#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>


typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;

int n, m;
ll dp[3000][3000];

ll cntr = 0;



void solve() {
	string s;
	cin >> s;
	cout << s;
	for (int i = s.size() - 1; i >= 0; i--)
		cout << s[i];
	cout << endl;
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
