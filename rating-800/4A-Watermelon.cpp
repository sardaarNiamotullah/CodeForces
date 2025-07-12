#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string toPrint = (n % 2 == 0 && n != 2 && n != 0) ? "YES": "NO";

    cout << toPrint << endl;

    return 0;
}