#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>


typedef long long ll;
using namespace std;
using vpii = vector<pair<int, int > >;
using pii = pair<int, int>;


int n, m;
ll cntr = 0;
//#define DEBUG


int rbsearch(vector<int>& a, int l, int r, int target) {

	while (l < r) {
		int mid = (l + r + 1) / 2;

		if (a[mid] > target) {
			r = mid - 1;
		}
		else
			l = mid;
	}
	return l;
}

int lbsearch(vector<int>& a, int l, int r, int target) {

	while (l < r) {
		int mid = (l + r) / 2;

		if (a[mid] > target) {
			r = mid - 1;
		}
		else if (a[mid] < target)
			l = mid + 1;
		else
			r = mid;
	}
	return l;
}

ll merge(vector<int>& a, int ll, int mm, int rr) {

	long long count = 0;
	int n1 = mm - ll + 1;
	int n2 = rr - (mm + 1) + 1;
	vector<int> L(n1), R(n2);

	for (int i = 0; i < n1; i++) {
		L[i] = a[ll + i];
	}

	for (int i = 0; i < n2; i++) {
		R[i] = a[mm + 1 + i];
	}

	L.push_back(1e9);
	R.push_back(1e9);

	int l = 0, r = 0;
	for (int ptr = ll; ptr <= rr; ptr++) {
		if (L[l] <= R[r]) {
			a[ptr] = L[l];
			l++;
		}
		else {
			int target = m - R[r];
			int l_pos = lbsearch(L, l, n1, target),
				r_pos = rbsearch(L, l, n1, target);
			
			if (L[l_pos] == target && L[r_pos] == target) {
				count += r_pos - l_pos + 1;
			}

			a[ptr] = R[r];
			r++;
		}
	}

	return count;
}

ll merge_sort(vector<int>& a, int l = 0, int r = n - 1) {

	if (l == r) {
		return 0;
	}

	int mid = (l + r) / 2;

	return
		merge_sort(a, l, mid) +
		merge_sort(a, mid + 1, r) +
		merge(a, l, mid, r);
}

vector<int> test(n);
bool key = 1;


void solve() {

#ifdef DEBUG
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		a[i] = test[i];
	}
#else
	cin >> n >> m;

	vector<int> a(n);
	for (auto& s : a)
		cin >> s;
#endif // DEBUG

	int cntr2 = 0;
	map<int, int> mp;

	for (int i = 0; i < n; i++) {
		// a[i] + a[j] == m && a[i] > a[j], i< j

		int target = m - a[i];
		if (target > a[i]) {
			// target == a[j]
			auto itr = mp.find(target);
			if (itr != mp.end()) {
				cntr2 += itr->second;
			}
		}
		mp[a[i]]++;
	}

	cntr = 0;
	cntr = merge_sort(a);


	if (cntr != cntr2) {
		key = 0;
		cout << cntr << " " << cntr2 << endl;
	}
#ifndef DEBUG
	cout << cntr;
#endif // !DEBUG

	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	

#ifdef DEBUG

	n = 9;
	test.resize(n);
	for (int i = 0; i < n; i++) {
		test[i] = rand() % 7 + 2;
	}

	while (key) {
		m = rand() %7 + 1;
		random_shuffle(test.begin(), test.end());
		solve();
	}

	cout << -1 << endl;
	cout << n << " " << m << endl;
	for (int num : test)
		cout << num << " ";
#else
	while (t--) {
		solve();
	}
#endif // DEBUG
}
