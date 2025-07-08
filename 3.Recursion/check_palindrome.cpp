#include<bits/stdc++.h>
using namespace std ;

bool check_palindrome(int si , int ei ,string s ){ 
    if(si>=ei)return true ;
    if(s[si]!=s[ei])return false;
    return check_palindrome(si + 1,ei - 1,s);

}


int main(){

    string st;
    cin>>st;

    bool result = check_palindrome(0,st.length()-1,st);
    cout<<result<<endl;
    

}