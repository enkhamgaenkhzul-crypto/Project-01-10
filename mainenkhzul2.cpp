#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long a = 1, b = 2;
        long long sum = 0;

        while (b <= N) {
            if (b % 2 == 0) {
                sum += b;
            }

            long long c = a + b;
            a = b;
            b = c;
        }

        cout << sum << endl;
    }

    return 0;
}
