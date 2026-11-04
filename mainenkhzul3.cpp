#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long largest = -1;

        while (N % 2 == 0) {
            largest = 2;
            N /= 2;
        }

        for (long long i = 3; i * i <= N; i += 2) {
            while (N % i == 0) {
                largest = i;
                N /= i;
            }
        }

        if (N > 1) {
            largest = N;
        }

        cout << largest << endl;
    }

    return 0;
}
