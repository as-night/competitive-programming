#include <cstdlib>
#include <iostream>
#include <cmath>

int main() {
    double n, m, a;
    std::cin >> n >> m >> a;

    std::cout << (long long) (ceil(n/a) * ceil(m/a)) << '\n';

    return EXIT_SUCCESS;
}
