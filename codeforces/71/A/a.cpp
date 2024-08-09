#include <cstdlib>
#include <format> // available since C++20
#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::string s;

    while (n--) {
        std::cin >> s;

        if (s.length() > 10) {
            std::cout << std::format("{}{}{}\n",
                                     s.front(),
                                     s.length() - 2,
                                     s.back());
        } else {
            std::cout << s << '\n';
        }
    }

    return EXIT_SUCCESS;
}
