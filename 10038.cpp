#include <iostream>

constexpr int MAX = 3000;

int main () {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int amount;
    while (std::cin >> amount) {
        bool diff[MAX] {};

        int prev; std::cin >> prev;
        for (int i = 1; i < amount; ++i) {
            int curr; std::cin >> curr;
            int difference = prev - curr;
            if (difference < 0) difference = -difference;
            diff[difference] = true;
            prev = curr;
        }

        bool is_jolly = true;
        for (int i = 1; i < amount && is_jolly; ++i) {
            is_jolly = diff[i];
        }

        if (is_jolly) std::cout << "Jolly\n";
        else std::cout << "Not jolly\n";
    }

    return 0;
}
