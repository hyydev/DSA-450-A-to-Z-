#include<bits/stdc++.h>
using namespace std ;

void reverse_array(int si,int ei,int a[]){
    if(si>=ei){
        return ;
    }
    int temp= a[si];
    a[si] =a[ei];
    a[ei] =temp ;
    
    reverse_array(si+1,ei-1,a);

}

int main(){
    int n ;
    cin>>n ;
    int arr[100];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    int si = 0;
    int ei = n-1;
    reverse_array(si,ei,arr);
    
    for(int i =0 ;i<n ;i++){
        cout<<arr[i]<<" "<<endl ;
    }

    

}