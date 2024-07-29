#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int x = 0;
    std::string s;

    while(n--) {
        std::cin >> s;

        if (s[1] == '+') {
            ++x;
        } else {
            --x;
        }
    }

    std::cout << x << '\n';

    return EXIT_SUCCESS;
}
