#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        string number;
        cin >> number;

        long long maxProduct = 0;

        for (int i = 0; i <= N - K; i++) {
            long long product = 1;

            for (int j = 0; j < K; j++) {
                product *= number[i + j] - '0';
            }

            if (product > maxProduct) {
                maxProduct = product;
            }
        }

        cout << maxProduct << endl;
    }

    return 0;
}
