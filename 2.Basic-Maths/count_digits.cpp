#include<bits/stdc++.h>
using namespace std;


int count_digits(int n ){
    int count =1;
    if(n<10){
        return count;
    }
    while(n>=10){
        n=n/10;
        count++;

    }
    return count;

}

int main(){
    int n ;
    cin>>n;

    int cd = count_digits(n);
    cout<<cd<<endl;

}




