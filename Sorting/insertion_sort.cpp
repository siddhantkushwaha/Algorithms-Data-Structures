/*
    Insertion Sort
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

    // If key's at position i, we're assuming prefix array is already sorted
    for (int i = 0; i < n; i++) {

        int j = i, key = arr[i];

        // If current key is smaller than the previous element, keeping moving it deeper in the prefix array
        while (j-1 >= 0 && key < arr[j-1]) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }
}

int main()
{
    vector<int> arr = {1, 4, -1, 0, 23, 12, 78};
    sort(arr);

    printarr(arr);

    return 0;
}
