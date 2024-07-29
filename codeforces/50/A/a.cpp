#include <cstdlib>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int m, n;
    std::cin >> m >> n;

    if (m * n % 2 == 0) {
        std::cout << m * n / 2 << '\n';
    } else {
        std::cout << (m * n - 1) / 2 << '\n';
    }

    return EXIT_SUCCESS;
}
