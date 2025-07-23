#include<bits/stdc++.h>
using namespace std ;

 vector<int>two_sum(vector<int>&nums,int target){
    int n = nums.size();
   
    unordered_map<int,int>mapp;
    for(int i =0 ;i<n;i++){
        int first_element = nums[i] ;
        int second_element = target - first_element;
        if(mapp.find(second_element)!=mapp.end()){

            return {mapp[second_element],i};
        }
        mapp[nums[i]] = i ;
    }
    return {-1,-1} ;

}


int main(){


    int n ,target ;
    cin>>n >>target ;

    vector<int>array(n);
    for(int i =0;i<array.size();i++){
        cin>>array[i] ;
    }
    vector<int> ans = two_sum( array, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    

}