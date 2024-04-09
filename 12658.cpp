#include <iostream>
#include <string>

int main () {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int amount_characters; std::cin >> amount_characters;
    std::string line;

    std::cin >> line;
    std::cin >> line;
    std::cin >> line;
    std::cin >> line;

    for (int i = 0; i < line.length(); i += 4) {
        if (line[i + 0] == '*') std::cout << "2";
        else if (line[i + 1] == '*') std::cout << "1";
        else std::cout << "3";
    }

    std::cout << "\n";
}
