#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, value(0);
    cin >> n;

	while (n--) {
		string statement;
		cin >> statement;

		if (statement[0] == 'X') {
			if (statement[2] == '+') {
				value++;
			} else {
				value--;
			}
		} else {
			if (statement[0] == '+') {
				value++;
			} else {
				value--;
			}
		}
	}

    cout << value << endl;
	return 0;
}