#include <cstdlib>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char c;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cin >> c;
            if (c == '1') {
                std::cout << std::abs(2 - i) + std::abs(2 - j);
                std::cout << '\n';
                return EXIT_SUCCESS;
            }
        }
    }

    return EXIT_SUCCESS;
}
