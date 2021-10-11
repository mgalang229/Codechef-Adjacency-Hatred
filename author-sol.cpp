#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> even;
		vector<int> odd;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (a % 2 == 0) {
				even.push_back(a);
			} else {
				odd.push_back(a);
			}
		}
		// the two (2) cases wherein it is impossible to produce an odd sum is when
		// all the numbers in the sequence are even or all odd
		if (even.empty() || odd.empty()) {
			cout << -1 << '\n';
			continue;
		}
		// otherwise, we can simply place all the even numbers first and all the odd numbers
		// after, and the difference of the turning point of even and odd numbers is odd
		// and when you add an odd number in an even sum, then the final answer would be odd
		// for example: 2, 4, 6, 8, 1 3 5 7
		// = |2 - 4| + |4 - 6| + |6 - 8| + |8 - 1| + |1 - 3| + |3 - 5| + |5 - 7|
		// = 2 + 2 + 2 + 1 + 2 + 2 + 2
		// = 12 + 1
		// = 13 (odd)
		for (auto& e : even) {
			cout << e << " ";
		}
		for (auto& e : odd) {
			cout << e << " ";
		}
		cout << '\n';
	}
	return 0;
}
