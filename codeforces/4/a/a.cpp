#include <cstdlib>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int w;
    std::cin >> w;

    if (w % 2 == 0 && w >= 4) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return EXIT_SUCCESS;
}
