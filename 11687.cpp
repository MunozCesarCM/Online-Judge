#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string input;
    while (true) {
        std::cin >> input;
        if (input == "END") break;

        int iterations = 2;
        while (input.length() > 1) {
            input = std::to_string(input.length());
            ++iterations;
        }

        if (input == "1") std::cout << "1\n";
        else std::cout << iterations << "\n";
    }
}
