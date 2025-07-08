#include<bits/stdc++.h>
using namespace std;

void n_to_one(int curr, int last ){

    if(curr < last) return ;
    cout<<curr<<endl;
    n_to_one(curr-1,last);
}

int main(){
    int n ;
    cin>>n ;
    n_to_one(n,1);
}