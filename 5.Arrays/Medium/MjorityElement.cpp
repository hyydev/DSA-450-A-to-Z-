#include<bits/stdc++.h>
using namespace std ;

int majority_element(vector<int>&nums){

    int n  =  nums.size();
    int ele = 0;
    int cnt = 0 ;

    for (int i =0 ;i<n; i++){

        if(cnt==0){
            cnt =1 ;
            ele =nums[i];

        }else if(nums[i]==ele){
            cnt++;

        }else cnt --;
    }

    int cnt1 =0 ;

    for(int i =0 ;i<n ;i++){
        if(nums[i] == ele) cnt1++;

    }

    if(cnt1 > n/2){
          return ele ;

    }else{
          return -1;
    }
  

   


}




int main(){


    int n ;
    cin>>n ;

    vector<int>array(n);
    for(int i =0;i<array.size();i++){
        cin>>array[i] ;
    }

    int ans = majority_element(array);
    cout<<ans<<endl;

}
