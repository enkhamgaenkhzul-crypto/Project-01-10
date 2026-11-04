#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long a = (N - 1) / 3;
        long long b = (N - 1) / 5;
        long long c = (N - 1) / 15;

        cout << 3*a*(a+1)/2
             + 5*b*(b+1)/2
             - 15*c*(c+1)/2 << endl;
    }

    return 0;
}
