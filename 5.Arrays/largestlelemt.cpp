#include<bits/stdc++.h>
using namespace std ;


int largest_element(vector<int>&v ){
    int n =v.size();
    int max = INT_MIN;
    for(int i =0 ;i<n;i++){
        if(v[i]>max){
            max =v[i] ;
        }

    }
    return max ;
}


int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n);

    for(int i =0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    int max_element = largest_element(arr) ;
    cout<<max_element<<endl;


}




