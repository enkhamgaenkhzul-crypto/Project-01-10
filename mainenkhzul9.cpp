#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long answer = -1;

        for (int a = 1; a < N / 3; a++) {
            for (int b = a + 1; b < N / 2; b++) {
                int c = N - a - b;

                if (a * a + b * b == c * c) {
                    long long product = 1LL * a * b * c;

                    if (product > answer) {
                        answer = product;
                    }
                }
            }
        }

        cout << answer << endl;
    }

    return 0;
}
