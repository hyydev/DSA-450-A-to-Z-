#include<bits/stdc++.h>
using namespace std ;

int longest_subarray(vector<int>&v , int k){
    int n = v.size();
    int sum = 0 ;
    int maxlen ;
    map<int,int>prefixsum;

    for(int i = 0 ;i<n;i++){
        sum += v[i];
        if(sum==k){
            maxlen = max(maxlen,i+1);
        }

        int rem = sum - k ;



    }
}



int main(){

    int n ,k ;
    cin >>n >>k ;
    vector<int>array(n);

    for (int i = 0 ;i<n;i++){
        cin>>array[i];
    }




}
