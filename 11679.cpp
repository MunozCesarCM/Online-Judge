#include <iostream>

// Evaluates at compile time
constexpr int MAX_BANKS = 21;

int main () {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int banks, debentures;
    while (std::cin >> banks >> debentures, banks | debentures) {

        int reserves[MAX_BANKS] {}; // Fills the array with 0s
        for (int i = 1; i <= banks; ++i) {
            std::cin >> reserves[i];
        }

        for (int i = 0; i < debentures; ++i) {
            int bank_debt, bank_owe, amount;
            std::cin >> bank_debt >> bank_owe >> amount;
            reserves[bank_debt] -= amount;
            reserves[bank_owe] += amount;
        }

        bool needs_bailout = false;
        for (int i = 1; i <= banks && !needs_bailout; ++i) {
            needs_bailout = reserves[i] < 0;
        }

        if (needs_bailout) std::cout << "N\n";
        else std::cout << "S\n";
    }
}
