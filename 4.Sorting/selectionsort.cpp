#include<bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int>&v){
    int n =v.size();

    for(int i =0 ;i<n;i++){
        int min =i ;

        for(int j=i+i;j<n;j++){
            if(v[min]>v[j]){
                // v[min]=v[j];
                min =j;

            }
        }
        swap(v[min],v[i]);

    }
    return v ;

}

int main(){
    int n ;
    cin>>n ;
    vector<int>v(n);
    for(int i =0 ;i<v.size();i++){
        cin>>v[i];
    }

    vector<int>ans =selection_sort(v);
    for(int i =0 ;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}