#include<bits/stdc++.h>
using namespace std ;

int maximum_subarray_sum(vector<int>&nums){
   

        int n = nums.size();
        int max_sum = INT_MIN;
        int sum = 0;
        int start = 0 ;
        int ansStart =-1;
        int ansEnd =-1 ;

        for (int i = 0; i < n; i++) {
            if (sum==0) start =i ;
            sum += nums[i];

            if (sum > max_sum) {
                max_sum = sum;
                ansStart = start;
                ansEnd =i ;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return max_sum;
        
    
}


int main(){


    int n ;
    cin>>n ;

    vector<int>array(n);
    for(int i =0;i<array.size();i++){
        cin>>array[i] ;
    }

    int ans = maximum_subarray_sum(array);
    cout<<ans<<endl;

}
