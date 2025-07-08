#include<bits/stdc++.h>
using namespace std ;


int second_largest(vector<int>&v){
    int max = INT_MIN;
    int second= INT_MIN;
    for(int i =0 ;i<v.size(); i++){
        if(v[i]>max){
            second = max ;
            max =v[i];
        
        }else if(v[i]>second && v[i]!=max){
            second =v[i];
        } 

    }
    return second ;
}

int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n);



    for(int i =0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    int ans = second_largest(arr);
    cout<<ans ;
    

}





