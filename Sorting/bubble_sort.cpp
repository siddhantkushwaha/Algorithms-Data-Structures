/*
    Bubble Sort
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
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    
    vector<int> arr = {1, 4, -1, 0, 23, 12, 78};
    sort(arr);

    printarr(arr);

    return 0;
}
