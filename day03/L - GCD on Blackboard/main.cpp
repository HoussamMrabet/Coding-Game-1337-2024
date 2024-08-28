#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    if (N == 2) {
        std::cout << std::max(A[0], A[1]) << std::endl;
        return 0;
    }

    std::vector<int> prefix_gcd(N), suffix_gcd(N);

    prefix_gcd[0] = A[0];
    for (int i = 1; i < N; ++i) {
        prefix_gcd[i] = gcd(prefix_gcd[i-1], A[i]);
    }

    suffix_gcd[N-1] = A[N-1];
    for (int i = N-2; i >= 0; --i) {
        suffix_gcd[i] = gcd(suffix_gcd[i+1], A[i]);
    }

    int max_gcd = 0;
    for (int i = 0; i < N; ++i) {
        int current_gcd;
        if (i == 0) {
            current_gcd = suffix_gcd[1];
        } else if (i == N-1) {
            current_gcd = prefix_gcd[N-2];
        } else {
            current_gcd = gcd(prefix_gcd[i-1], suffix_gcd[i+1]);
        }
        max_gcd = std::max(max_gcd, current_gcd);
    }

    std::cout << max_gcd << std::endl;

    return 0;
}
