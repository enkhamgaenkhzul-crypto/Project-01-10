#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MAX = 1000000;

    vector<bool> prime(MAX + 1, true);

    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                prime[j] = false;
            }
        }
    }

    vector<long long> sum(MAX + 1, 0);

    for (int i = 1; i <= MAX; i++) {
        sum[i] = sum[i - 1];

        if (prime[i - 1]) {
            sum[i] += i - 1;
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        cout << sum[N] << endl;
    }

    return 0;
}
