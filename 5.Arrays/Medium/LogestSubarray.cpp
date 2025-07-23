#include<bits/stdc++.h>
using namespace std ;

int LongestSubarraySum_K_2(vector<int>&v,int k){
    int n =v.size();
    map<int,int>preSumMap ;
    int maxlen = 0 ;
    int sum =0 ;
    for(int i =0 ;i<n ;i++){
        sum+=v[i];
        if(sum==k){
            maxlen = max(maxlen,i+1);
        }
        int rem = sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i-preSumMap[rem];
            maxlen = max(maxlen,len);
        }
         if(preSumMap.find(rem)==preSumMap.end()){
            preSumMap[sum]=i ;

         }
    }
    return maxlen;


}
 

//solution --> optimal solutions for postives nuuber only . but for -ve numbers it is not a right approch 
int LongestSubarraySum_K(vector<int>&v,int k){

    int n =v.size();
    int left = 0;
    int right =0;
    int maxlen =0 ;
    int sum =v[0] ;

    while(right<n){

        while(left <= right && sum>k ){
            sum-=v[left];
            left++;
        }

        if(sum ==k){
            maxlen = max(maxlen,right-left+1);
        }
        right++;
        if(right<n)  sum+=v[right];



    }
    return maxlen ;
    

}

int main(){


    int n ,k ;
    cin>>n >>k ;

    vector<int>array(n);
    for(int i =0;i<array.size();i++){
        cin>>array[i] ;
    }
    int ans1 = LongestSubarraySum_K(array,k);
    int ans2 = LongestSubarraySum_K_2(array,k);
    cout<<"Longest Subarray Length is (solution for +ve numbers) is "<<" " <<ans1<<endl ;
    cout<<"Longest Subarray Length is for both -ve and +ve numbers "<<" " <<ans2<<endl;


}