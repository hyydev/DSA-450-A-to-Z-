#include<bits/stdc++.h>
using namespace std ;

vector<int> reaarange(vector<int>&nums){
    int n = nums.size();
    int even_position =0;
    int odd_position = 1 ;
    vector<int>out(n);

    for(int i = 0;i<n;i++){
        if(nums[i]>0){
            out[even_position]=nums[i];
            even_position+=2;

        }else{
            out[odd_position]=nums[i];
            odd_position+=2;

        }

    }
    return out;




}


int main(){
    int n ;
    cin>>n ;

    vector<int>array(n);
    for(int i =0;i<array.size();i++){
        cin>>array[i] ;
    }

    vector<int>out = reaarange(array);

    for(int i =0;i<out.size();i++){
        cout<<out[i]<<" ";

    }
}