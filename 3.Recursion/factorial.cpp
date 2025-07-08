#include<bits/stdc++.h>
using namespace std ;

int factorial(int n){
    int product =1 ;
    if(n==1){
        return ;
    }
    int results =  product*factorial(n-1);
    return results;



}

int main(){
    int n ;
    cin>>n ;
    int result =factorial(n);
    cout<<result<<endl;

}