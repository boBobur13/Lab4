#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n = " ;
    cin>>n;
 
    for (int i=10 ; i<=n; i++) {
        if (i % 10 == 0) {
            cout <<i<<" " ;
        }
    }
    return 0;
}
