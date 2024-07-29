#include <cstdlib>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int a, b, c;
    int answer = 0;
    while (n--) {
        std::cin >> a >> b >> c;

        if (a + b + c >= 2)
            ++answer;
    }

    std::cout << answer << '\n';

    return EXIT_SUCCESS;
}
