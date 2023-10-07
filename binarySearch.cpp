#include <bits/stdc++.h>

using namespace std;

//binarySearch function
int binarySearch(int A[], int n, int x) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        
        if (A[mid] == x) {
            return mid;
        }

        else if (A[mid] > x)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

int main() {
    int a[] = {1, 3, 5, 7, 9, 10, 35, 150};
    // cout << binarySearch(a, sizeof(a) / sizeof(int), 10);
    int x = 5;
    int y = 2;
    cout << x / y*1.0 << endl;

    return 0;
}
