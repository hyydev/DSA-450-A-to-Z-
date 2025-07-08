#include<bits/stdc++.h>
using namespace std;

void one_to_n(int c,int n){
    if(n<=0){
        cout<<'0'<<endl;
    }

    if(c > n) return ;
    cout<<c<<endl;
    
    one_to_n(c+1,n);

}


int main(){
    int n ;
    cin >> n ;

    one_to_n(1,n);
}