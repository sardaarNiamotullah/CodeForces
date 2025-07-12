#include <iostream>

using namespace std;

int main() {
    int n, value = 0;
    cin >> n;

    while (n--) {
        string statement;
        cin >> statement;

        if (statement.find("++") != string::npos) {
            value++;
        } else {
            value--;
        }
    }

    cout << value << endl;
    
    return 0;
}
