#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 1, 1, 2};

    int n = arr.size();

    sort(arr.begin(), arr.end());

    int count = 1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > n / 2) {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}