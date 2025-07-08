#include<bits/stdc++.h>
using namespace std ;



void n_times_name(int n){
    int count;
    if(count==n) return ;

    cout<<"devesh"<<endl;
    count ++ ;
    n_times_name(n-1);


}

int main(){
    int n ;
    cin>>n;

    n_times_name(n);

}




