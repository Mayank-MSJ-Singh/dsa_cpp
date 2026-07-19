#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;
    int n = arr.size();
    vector<pair<int, int>> ans;

    int i = 0;
    int j = n-1;
    while (i < j){
        if (arr[i] + arr[j] == target){
            ans.push_back({arr[i], arr[j]});
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > target){
            j--;
        }
        else {
            i++;
        }
    }
    

    for (auto [x, y] : ans) {
        cout << "(" << x << ", " << y << ") ";
    }
    cout << endl;
    return 0;
}