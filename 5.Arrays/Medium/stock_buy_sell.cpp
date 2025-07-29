#include<bits/stdc++.h>
using namespace std ;

int stock_buy_sell(vector<int>&prices){
        int n = prices.size();
        int mini = INT_MAX;
        int max_profit = 0 ;
        for(int i =0;i<n;i++){
            mini=min(prices[i],mini);
            max_profit=max(max_profit,prices[i]-mini);


        }
        return max_profit ;

        
    }

int main(){


    int n ;
    cin>>n ;

    vector<int>array(n);
    for(int i =0;i<array.size();i++){
        cin>>array[i] ;
    }
    int ans  = stock_buy_sell(array);
    cout<<ans<<endl ;
}



