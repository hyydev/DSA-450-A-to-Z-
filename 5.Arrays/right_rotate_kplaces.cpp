#include<bits/stdc++.h>
using namespace std ;


vector<int> rotate_right_by_k(vector<int>&v,int k){
    int n = v.size();
    for(int r = 1 ; r<=k;r++){

    
        int j =1 ;
        int temp = v[n-1];
        for(int i = n-j-1 ;i>=0;i--){
        v[i+1] =v[i];
        j++;

        }
        v[0]=temp;
    }
    
    return v ;
}




int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n);



    for(int i =0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    vector<int>ans = rotate_right_by_k(arr,3);
      
    for(int i =0 ;i<ans.size();i++){
        cout<<ans[i]<<endl;

    }
    

    
    

}