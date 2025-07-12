#include<bits/stdc++.h>
using namespace std ;


vector<int> Moves_zeroes_to_end(vector<int>&v){
    int n =v.size();
    int j =-1 ;
    for(int i =0 ; i< n ;i++){
        if(v[i]==0){
            j =i ;
            break;
        }

    }

    if(j == -1) return v ;
    
    for(int i =j+1;i<n;i++){
        if(v[i]!=0){
            swap(v[j],v[i]);
            j++;
        }


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

    vector<int>ans =Moves_zeroes_to_end(arr);
    for(int i =0 ;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }


}