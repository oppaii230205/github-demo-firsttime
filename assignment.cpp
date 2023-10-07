#include <iostream>

using namespace std;

int main() {
    int plate;
    int sum = 0;
    cin >> plate;

    while (plate != 0) {
        int temp = plate % 10;
        sum += temp;
        plate /= 10;

        if (plate == 0) {
            if (sum >= 10) {
                plate = sum;
                sum = 0;
            }
            else { // sum la ket qua
                plate = 0;
            }
        }
    }

    cout << "So nut " << sum << endl;
    cout << "Nguyen Hung Thinh\t23120200" << endl;
    return 0;
}