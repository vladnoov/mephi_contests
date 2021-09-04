#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>


typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;

int n, m;
ll dp[3000][3000];

ll cntr = 0;

int count(vector<int>& perm, vector<vector<int > > & m) {
	// perm[0] - день, в который встетится с первым другом
	//perm[1]  - со вторым

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += m[i + 1][perm[i]];
	}
	return cnt;
}

void solve() {
	cin >> n;
	vector<int> perm(n);
	for (int i = 0; i < n; i++) {
		perm[i] = i + 1;
	}
	vector<vector<int > > meets(n + 1, vector<int >(n + 1));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> meets[i][j];
		}
	}

	int ans = 0, res;
	bool check = 1;
	while (check) {
		res = count(perm, meets);
		ans = max(ans, res);
		check = next_permutation(perm.begin(), perm.end());
	}
	cout << ans << endl;
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
