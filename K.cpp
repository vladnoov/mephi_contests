#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>


typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;

int gcd(int a, int b)
{
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}

int n, m;
ll dp[3000][3000];

ll cntr = 0;


int dist(int x1, int y1, int x2, int y2) {
	return (abs(x2 - x1) + abs(y2 - y1));
}

void solve() {
	cin >> n;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (dist(i, j, x1, y1) == dist(i, j, x2, y2))
				cout << i << " " << j << endl;
		}
	}

	//cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	//cin >> t;


	while (t--) {
		solve();	
	}
}
