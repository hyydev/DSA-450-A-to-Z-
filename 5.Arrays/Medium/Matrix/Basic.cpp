#include<bits/stdc++.h>
using namespace std; 

void RotateMatrix(vector<vector<int>>&matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i =0 ;i<row;i++){
        cout<<endl;
        for(int j =i+1 ;j<col;j++){
            
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i =0 ;i<row;i++){
        reverse(matrix[i].begin(),matrix[i].end());

    }
}

int main(){
    int n , m ;
    cin>>n >>m ;

    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0 ;i<n;i++){
        for(int j =0 ;j<m;j++){
            cin>>matrix[i][j];
        }
    }
      if(n != m){
        cout << "Rotation in-place only possible for square matrix." << endl;
        return 0;
    }

    RotateMatrix(matrix) ;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
   
}
