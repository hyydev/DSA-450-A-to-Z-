#include<bits/stdc++.h>
using namespace std ;

vector<int> bubble_sort(vector<int>&v){
    int n =v.size();
    for(int r =0;r<n-1;r++){
        for(int i =0;i<n;i++){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);

            }

        }
    }
    return v ;
}

int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n) ;
    for(int i= 0;i<arr.size();i++){
        cin>>arr[i];


    }

    vector<int>ans = bubble_sort(arr);
    for(int i =0 ;i<ans.size();i++){
        cout<<ans[i]<<endl;

    }
    
}