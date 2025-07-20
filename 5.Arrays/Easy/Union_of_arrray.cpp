#include<bits/stdc++.h>
using namespace std ;

//solution - when arrys is not sorted and we need an output sorted

vector<int> Union_array(vector<int>&v1 ,vector<int>&v2){
    vector<int>Union ;
    map<int,int>freq ;
    for(int i =0 ;i<v1.size();i++){
        freq[v1[i]]++;
    }

    for(int i =0 ;i<v2.size();i++){
        freq[v2[i]]++;
    }

    for(auto &it:freq){
        Union.push_back(it.first);

    }
    return Union;

}

//solution2 - when we care about space complexity 
//and  make shure the given arrays are sorted 


vector<int> Union_array2(vector<int>&v1 ,vector<int>&v2){
    int n = v1.size();
    int m =v2.size();
    int i =0 ;
    int j =0 ;
    vector<int>union_ar;
    while(i<n && j<m ){
        
        if(v1[i]<=v2[j]){
            if(union_ar.size()==0 ||  v1[i] != union_ar.back()){
                union_ar.push_back(v1[i]);

            }
            i++;


        }else {
            if(union_ar.size()==0 || v2[j] != union_ar.back()){
                union_ar.push_back(v2[j]);

            }
            j++;
        }
    }

        while( i<n){
            if(union_ar.size()==0 ||  v1[i] != union_ar.back()){
                    union_ar.push_back(v1[i]);
        }
        i++;

    }

        while( j<m){
            if(union_ar.size()==0 ||  v2[j] != union_ar.back()){
                    union_ar.push_back(v2[j]);
        }
        j++;

        }
    return union_ar;

}


int main(){
    int n ,m;
    cin>>n>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);

    for(int i =0 ;i<arr1.size();i++){
        cin>>arr1[i];
    }

    for(int i =0 ;i<arr2.size();i++){
        cin>>arr2[i];
    }


    vector<int>Union = Union_array(arr1,arr2) ;
    for(auto &it : Union){
        cout<<it<<" ";
    }
    cout<<endl ;


    cout<<"Using 2 pointer approch"<<endl;

    vector<int>union_arr = Union_array2(arr1,arr2);
    for(int i =0 ;i<union_arr.size();i++){
        cout<<union_arr[i]<<" " ;
    }

}