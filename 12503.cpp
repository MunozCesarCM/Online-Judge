#include <iostream>
#include <string>

int main () {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int cases; std::cin >> cases;

    while (cases--) {
        bool instruction_list[101] {};
        int location = 0;

        int instructions;
        std::cin >> instructions;

        for (int i = 1; i <= instructions; ++i) {
            std::string curr_instruction;
            std::cin >> curr_instruction;

            if (curr_instruction == "LEFT") {
                instruction_list[i] = false;
                --location;
            } else if (curr_instruction == "RIGHT") {
                instruction_list[i] = true;
                ++location;
            } else {
                std::cin >> curr_instruction; // Not required
                int value; std::cin >> value;
                location += instruction_list[value] ? 1 : -1;
                instruction_list[i] = instruction_list[value];
            }
        }

        std::cout << location << "\n";
    }
}
