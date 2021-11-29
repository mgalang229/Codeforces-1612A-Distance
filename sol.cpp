#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		// if the manhattan distance to point B is not divisible 
		// by 2, then the answer does not exist
		if ((x + y) % 2 == 1) {
			cout << -1 << " " << -1 << '\n';
			continue;
		}
		/*
			otherwise, find the distance between points A and B and divide it by 2
			there will be 2 cases afterward:
			
			let m = manhattan distance between points A and B divided by 2
			
			case 1: x > y
			coordinates: (m, 0)
			
			case 2: x < y
			coordinates: (0, m)
			
			case 3: x == y
			coordinates: either one of the two coordinates above
		*/
		int main_dist = (x + y) / 2;
		pair<int, int> ans = {0, 0};
		if (x > y) {
			ans = make_pair(main_dist, 0);
		} else {
			ans = make_pair(0, main_dist);
		}
		cout << ans.first << " " << ans.second << '\n';
	}
	return 0;
}
