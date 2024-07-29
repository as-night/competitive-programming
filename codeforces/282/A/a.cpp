#include <cstdlib>
#include <iostream>
#include <string>

int main() {
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
