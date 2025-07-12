#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        string word = "";
        cin >> word;
        if (word.size() <= 10) {
            cout << word << endl;
        } else {
            int len = word.length();
            cout << word[0] << len-2 << word[len-1] << endl;
        }
    }
 
    return 0;
}