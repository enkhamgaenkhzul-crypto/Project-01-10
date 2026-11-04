#include <iostream>
using namespace std;

bool palindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int answer = -1;

        for (int i = 999; i >= 100; i--) {
            for (int j = i; j >= 100; j--) {
                int product = i * j;

                if (product < N && product > answer &&
                    palindrome(product)) {
                    answer = product;
                }
            }
        }

        cout << answer << endl;
    }

    return 0;
}
