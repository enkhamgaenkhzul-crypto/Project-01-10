#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long sum = N * (N + 1) / 2;
        long long sumSquare = N * (N + 1) * (2 * N + 1) / 6;

        long long answer = sum * sum - sumSquare;

        cout << answer << endl;
    }

    return 0;
}
