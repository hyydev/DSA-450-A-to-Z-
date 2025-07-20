#include<bits/stdc++.h>
using namespace std ;


bool check_sorted(vector<int>&v, int index=0){
    int n = v.size();
   

    if(index>=n-1) return true;

    if(v[index]>v[index+1]) return false ;

    return  check_sorted(v , index+1) ;
    
}


int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n);

    for(int i =0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    bool ans =check_sorted(arr);
    cout << (ans ? "true" : "false") << endl;
    

    
   




}




