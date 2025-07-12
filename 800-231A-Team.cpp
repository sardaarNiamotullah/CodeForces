#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n, p, v, t, implement(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if (p+v+t >= 2)
            ++implement;
    }

    cout << implement << endl;
    
    return 0;
}