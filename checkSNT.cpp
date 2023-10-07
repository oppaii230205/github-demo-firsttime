#include <cmath>

bool checkSNT(int n) {
    if (n < 2)
        return false;
    else
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }

    return true;
}