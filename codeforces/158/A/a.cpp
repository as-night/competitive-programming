#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int score = a[k - 1];
    int sum = 0;
    for (auto elem : a) {
        if (elem > 0 && elem >= score) {
            ++sum;
        }
    }

    std::cout << sum << '\n';

    return EXIT_SUCCESS;
}
