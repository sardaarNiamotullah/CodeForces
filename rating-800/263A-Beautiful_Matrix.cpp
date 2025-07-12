#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int num = 0, posx, posy;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> num;
			if (num == 1)
				posx = i, posy = j;
		}
	}

	posx = abs(2 - posx), posy = abs(2 - posy);

	cout << posx + posy << endl;

	return 0;
}