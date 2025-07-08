#include<bits/stdc++.h>
using namespace std ;


int remove_dublicates(vector<int>&v){
    int i = 0 ;
    for(int j =1;j<v.size();j++){
        if(v[j]!=v[i]){

            v[i+1] = v[j] ;

            i++;
            
            
        }



    }
    return i+1 ;
}


int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n);



    for(int i =0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    int ans = remove_dublicates(arr);
    cout<<ans<<endl;

}