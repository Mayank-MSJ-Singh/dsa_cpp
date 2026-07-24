#include <iostream>
#include <vector>

using namespace std;

void subset(vector<int> &arr, vector<int> &ans, int i) {
  if (i == arr.size()) {
    for (auto x : ans) {
      cout << x << " ";
    }
    cout << endl;
    return;
  }
  ans.push_back(arr[i]);
  subset(arr, ans, i + 1);
  ans.pop_back();
  i += 1;
  while (i < arr.size() && arr[i] == arr[i - 1]) {
    i += 1;
  }
  subset(arr, ans, i);
}

int main() {
  vector<int> arr = {1, 2, 2};
  vector<int> ans;
  subset(arr, ans, 0);
  return 0;
}