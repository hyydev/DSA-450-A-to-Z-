#include <bits/stdc++.h>
using namespace std;

int subarray_count(vector<int>&nums,int k ){
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        int prefixsum = 0;
        for(int j = i; j < n; j++){
            prefixsum += nums[j];
            if(prefixsum == k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> array(n);
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int ans = subarray_count(array, k);
    cout << ans << endl;
}