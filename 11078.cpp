#include <iostream>
#include <algorithm>
#include <climits>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int cases;
    std::cin >> cases;

    while (cases--) {
        int students;
        std::cin >> students;

        int max_score;
        std::cin >> max_score;

        int max_difference = INT_MIN;
        for (int i = 1; i < students; ++i) {
            int current_student;
            std::cin >> current_student;

            max_difference = std::max(max_difference, max_score - current_student);
            max_score = std::max(max_score, current_student);
        }

        std::cout << max_difference << "\n";
    }

    return 0;
}

