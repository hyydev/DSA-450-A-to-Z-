#include<bits/stdc++.h>
using namespace std ;


vector<int> left_rotate_one(vector<int>&v){
        int n = v.size();
        int temp = v[0];

        for(int i = 1 ;i<=n;i++){
            v[i-1] =v[i];
           

        }
        v[n-1]=temp;
 
    
    return v ;
}




int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n);



    for(int i =0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    vector<int>ans = left_rotate_one(arr);
      
    for(int i =0 ;i<ans.size();i++){
        cout<<ans[i]<<endl;

    }
    

    
    

}