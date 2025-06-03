#include<bits/stdc++.h>
using namespace std;

int main(){
    void explain_pair();
    pair<int,int>p = {1,2};
    cout << "First element: " << p.first << endl;
    cout << "Second element: " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "First element of p2: " << p2.first << endl;
    cout << "Second element of p2: " << p2.second.first << endl;
    cout << "Third element of p2: " << p2.second.second << endl;
    pair<int, int> p3 = make_pair(4, 5);
    cout << "First element of p3: " << p3.first << endl;
    cout << "Second element of p3: " << p3.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Array of pairs:" << endl;
    cout << "First element: " << arr[0].first << ", Second element: " << arr[0].second << endl;
    cout << "First element: " << arr[1].first << ", Second element: " << arr[1].second << endl;




    
}   