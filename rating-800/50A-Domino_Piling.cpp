#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n, maximum = 0;
	cin >> m >> n;

	maximum = (m*n)/2;

	cout << maximum << endl;

	return 0;
}