/*Using Kadane's Algorithm to find the maximum sum of a contiguous subarray.
*/

#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int main(){
    int n = 9;
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = INT_MIN;
    
    for(int st = 0; st < n; st++){
        for (int end = st; end < n; end++){
            int caseSum = 0;
            for(int i = st; i<=end; i++){
                caseSum += arr[i];
                maxSum = max(maxSum, caseSum);
                if (caseSum < 0){
                    caseSum = 0;
                }

            }
        }
    }

    cout<<maxSum<<endl;
    return 0;
}