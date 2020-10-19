/*
    Selection Sort
    a. Sorting algorithm
    b. Comparsion based
    c. Time - O(n^2)
    d. Space - O(n)
*/

#include <iostream>
#include <vector>

using namespace std;

#define printarr          \
    for (auto a : arr)    \
        cout << a << ' '; \
    cout << '\n';

void sort(vector<int> &arr) {

    int n = arr.size();
    for (int i = 0; i < n; i++) {

        int minIdx = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        // with the prefix already sorted, find the smallest element in the rest of the array and append to prefix
        int j = minIdx, key = arr[minIdx];
        while (j >= i) {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[i] = key;
    }
}

int main() {

    vector<int> arr = {1, 4, -1, 0, 23, 12, 78};
    sort(arr);

    printarr(arr);

    return 0;
}
