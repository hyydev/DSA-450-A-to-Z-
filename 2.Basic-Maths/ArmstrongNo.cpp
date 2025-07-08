#include<bits/stdc++.h>
using namespace std;



int Armstrong(int x){
    int original =x;
    int count =0;
    int sum =0;
    int dig = 0 ;
    
    while(x>0){
        count ++ ;
        x =x/10 ;
        
    }
    x =original;
    


    while(x>0){
        dig =x%10;
        sum +=pow(dig,count);
        x=x/10;

    }
    return sum;

    
}

bool check_armstrong(int x){
    return Armstrong(x) == sum;
  
    }






int main(){
    int n ;
    cin>>n;

    cout<<check_armstrong(n)<<endl;


}