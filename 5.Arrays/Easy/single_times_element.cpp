#include<bits/stdc++.h>
using namespace std ;


int single_times(vector<int>& nums){
    int n =nums.size();
    map<int,int>num_map ;
    for(int i=0 ;i<n;i++){
        num_map[nums[i]]++ ;

    }
    for(auto it:num_map){
        if(it.second==1){
            return it.first;
        }

    }
    return -1;
}

int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n);



    for(int i =0 ;i<arr.size();i++){
        cin>>arr[i];
    }
    int single_element = single_times(arr);
    cout<<"element which is coming single time is : --> " <<single_element<<endl;
    
}