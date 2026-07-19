/*Using Kadane's Algorithm to find the maximum sum of a contiguous subarray.
*/

#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int main(){
    int n = 9;
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = INT_MIN;
    int caseSum = 0;
    for(int val : arr){
        caseSum += val;
        maxSum = max(maxSum, caseSum);
        if (caseSum < 0){
            caseSum = 0;
        }
    }

    cout<<maxSum<<endl;
    return 0;
}