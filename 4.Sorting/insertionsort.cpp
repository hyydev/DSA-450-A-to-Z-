#include<bits/stdc++.h>
using namespace std ;

vector<int> insertion_sort(vector<int>&v){
        int n = v.size();
        for(int i =1;i<n;i++){
            int j = i-1;
            int key = v[i] ;
            while(j>=0 && v[j]>key){
                v[j+1]=v[j];
                j--;

            }
            v[j+1] =key ;


         
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

    vector<int>ans = insertion_sort(arr);
    for(int i =0 ;i<ans.size();i++){
        cout<<ans[i]<<endl;

    }

}