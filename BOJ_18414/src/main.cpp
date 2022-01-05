#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, l, r;
	cin >> x >> l >> r;

	if (x < l) {
		cout << l;
		return 0;
	}

	if (r < x) {
		cout << r;
		return 0;
	}

	cout << x;
	return 0;
}