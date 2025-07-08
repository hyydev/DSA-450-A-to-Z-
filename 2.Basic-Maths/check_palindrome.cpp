#include <bits/stdc++.h>
using namespace std ;


int reverse_digits(int n ){
    if(n == INT_MIN) return 0;
    bool isnegative =n<0;
    n=abs(n);
    int result = 0;
    while(n>0){  
      int last_element = n%10;
        // Overflow check
    if(result > (INT_MAX - last_element) / 10){
        return 0; // overflow hone par
    }
      result = result *10 + last_element;
      n =n/10;
    }
    return isnegative ? -result : result;
}


bool isPalindrome(int x){
    int rev = reverse_digits(x);
    if (rev==x){
        return true;
    }else{
        return false;
    }

}

int main(){
    int n ;
    cin>>n ;
    cout<<isPalindrome(n)<<endl;

}
