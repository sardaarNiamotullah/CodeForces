#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k, disqualified = 0;
	cin >> n >> k;

	vector<int> scores(n);
	for (int &i : scores)
		cin >> i;
	
	int score_to_qualify = scores[k-1];

	for (int i = n-1; i >= 0; i--) {
		if (scores[i] < score_to_qualify || scores[i] == 0) {
			disqualified++;
		} else {
			break;
		}
	}

	cout << n - disqualified << endl;

	return 0;
}