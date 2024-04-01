#include <iostream>
#include <string>

int main () {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int inputs;
    std::cin >> inputs;

    while (inputs--) {
        std::string str;
        std::cin >> str;

        int current_counter = 0;
        int total_count = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == 'X') current_counter = 0;
            else ++current_counter;
            total_count += current_counter;
        }
        std::cout << total_count << "\n";
    }
}
