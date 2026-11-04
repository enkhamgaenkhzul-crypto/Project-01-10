#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long lcm = 1;

        for (int i = 2; i <= N; i++) {
            lcm = lcm / gcd(lcm, i) * i;
        }

        cout << lcm << endl;
    }

    return 0;
}
