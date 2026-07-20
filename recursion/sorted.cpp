#include <iostream>
#include <vector>
using namespace std;

bool sorted(vector<int> &arr, int n) {
  if (n == 1) {
    return true;
  } else if (arr[n - 1] >= arr[n - 2]) {
    return sorted(arr, n - 1);
  }
  return false;
}

bool loop_sorted(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return false;
    }
  }
  return true;
}

int main() {

  vector<int> arr = {1, 2, 3, 5, 5};
  int n = arr.size();
  if (sorted(arr, n)) {
    cout << "Sorted" << endl;
  } else {
    cout << "Not Sorted" << endl;
  }
  return 0;
}