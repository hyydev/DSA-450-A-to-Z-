#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v ={};

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.emplace_back(5);

cout << "Vector elements: ";
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}


vector<pair<int,int>>v2;
v2.push_back({1,2});
v2.push_back({3,4});
v2.emplace_back(5,6);

vector<int>v1(5, 10); // vector of size 5, all elements initialized to 10


vector<int>::iterator it = v.begin();

cout << "First element: " << *it << endl; // Output: 10

for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";


}

//insertion operations
v.insert(v.begin() + 2, 100); // Insert 100 at index 2
cout << "\nAfter inserting 100 at index 2: ";

v.erase(v.begin() + 3); // Erase element at index 3
cout << "\nAfter erasing element at index 3: ";




}