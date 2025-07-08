#include<bits/stdc++.h>
using namespace std;


int sum_n_times(int curr , int n){
    if(curr>n){
        return 0 ;
    }

    int sum =0 ;
    sum = curr ;
    int results = sum + sum_n_times(curr+1,n);
    return results;
}

int main(){
    int n ;
    cin>>n ;
    int sum =sum_n_times(1,n);
    cout<<sum<<endl;

}
