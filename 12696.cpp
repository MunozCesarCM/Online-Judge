#include <cstdio>
#include <iostream>

int main () {
    int cases;
    scanf("%d", &cases);

    int total_allowed = 0;
    while (cases--) {
        int l1, l2, w1, w2, d1, d2, we1, we2;
        scanf("%d.%d %d.%d %d.%d %d.%d", &l1, &l2, &w1, &w2, &d1, &d2, &we1, &we2);

        l1 *= 100;
        w1 *= 100;
        d1 *= 100;
        we1 *= 100;

        if (
            ((l1 + l2 + w1 + w2 + d1 + d2 <= 12500) ||
            (l1 + l2 <= 5600 && w1 + w2 <= 4500 && d1 + d2 <= 2500)) &&
            we1 + we2 <= 700
        ) {
            std::cout << "1\n";
            ++total_allowed;
        } else {
            std::cout << "0\n";
        }
    }

    std::cout << total_allowed << "\n";
}
