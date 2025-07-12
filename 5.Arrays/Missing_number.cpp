#include <bits/stdc++.h>
using namespace std;

// Linear search in the array
bool linear_search(vector<int>& nums, int number) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == number) {
            return true;
        }
    }
    return false;
}

// Function to find the missing number using linear search
int missing_number_bfs(vector<int>& nums) {
    int n = nums.size(); // array of size n, missing 1 number from 0 to n
    for (int i = 0; i <= n; i++) {
        if (!linear_search(nums, i)) {
            return i;
        }
    }
    return -1; // should never happen

}

// solution 2 usiing hashing . 

int missing_elelment_hashing(vector<int>v){ 

    unordered_map<int,bool>hashmap;
    for(int v:v){
        hashmap[v] = true;

    }
    int n = v.size();
    for(int i=0;i<n+1;i++){
        if(hashmap.find(i)==hashmap.end()){
            return i ;

        }
    }
    return -1 ;



}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing_value = missing_number_bfs(arr);
    cout << "Missing number using brute force solution : " << missing_value << endl;
    int missing_value_2 = missing_elelment_hashing(arr);
    cout<<"missing value using hashing : "<<missing_value_2<<endl;

    return 0;

}