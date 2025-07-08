#include<bits/stdc++.h>
using namespace std ;

int febonacci(int n){
    if(n<=1){
        return n;
    }
    int last = febonacci(n-1);
    int slast =febonacci(n-2);
    return last + slast;
}

int main(){
    int n ;
    cin>>n ;

    int result = febonacci(n);
    cout<<result<<endl ;

}

