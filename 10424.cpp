#include <iostream>
#include <string>

int reduce_value(int value) {
    while (value >= 10) {
        int sum = 0;
        while (value > 0) {
            sum += value % 10;
            value /= 10;
        }
        value = sum;
    }
    return value;
}

int love_calculator(std::string name) {
    int sum = 0;
    for (int i = 0; i < name.length(); ++i) {
        if (isalpha(name[i])) {
            sum += std::toupper(name[i]) - 'A' + 1;
        }
    }
    return reduce_value(sum);
}

int main() {
    std::string name1, name2;

    while (std::getline(std::cin, name1) && std::getline(std::cin, name2)) {
        int reduced1 = love_calculator(name1);
        int reduced2 = love_calculator(name2);

        double ratio = static_cast<double>(std::min(reduced1, reduced2)) / std::max(reduced1, reduced2);

        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << ratio * 100.0 << " %\n";
    }
    return 0;
}

