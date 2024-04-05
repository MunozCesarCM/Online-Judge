#include <iostream>

constexpr int MAX_CARS = 1010;

int main () {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int cars;
    while (std::cin >> cars, cars) {
        int positions[MAX_CARS] {};

        for (int i = 1; i <= cars; ++i) {
            int car_number, curr_pos;
            std::cin >> car_number >> curr_pos;
            if (i + curr_pos <= 0 || i + curr_pos > cars) continue;
            positions[i + curr_pos] = car_number;
        }

        bool is_possible = true;
        for (int i = 1; i <= cars && is_possible; ++i) {
            is_possible = positions[i];
        }

        if (!is_possible) std::cout << "-1\n";
        else {
            for (int i = 1; i <= cars; ++i) {
                std::cout << positions[i];
                if (i != cars) std::cout << " ";
            }
            std::cout << "\n";
        }
    }

    return 0;
}
