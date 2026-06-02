# 📚 Matrix (2D Array) in C++ — Complete Notes (Basic to Advanced)

---

## 1. Matrix/2D Array Kya Hota Hai?

- **Definition:**  
  Ek matrix ya 2D array ek aisa data structure hai jisme rows aur columns hote hain, matlab ek table ki tarah socho.
- **Syntax:**  
  `int arr[3][4]; // 3 rows, 4 columns`
- **Access:**  
  `arr[i][j]` (i = row, j = column)
- **Visualization:**  
  ```
  1 2 3 4
  5 6 7 8
  9 0 1 2
  ```
  Yani, har row ke andar columns hain.

---

## 2. 2D Vector in C++ (Modern Approach)

- **Declaration:**  
  `vector<vector<int>> mat; // Empty matrix`
  - Matlab abhi koi row nahi hai, bilkul khaali hai.

- **Fixed Size Initialization:**  
  ```cpp
  int n = 3, m = 4;
  vector<vector<int>> mat(n, vector<int>(m, 0)); // 3x4 matrix, sab 0
  ```
  - Yani 3 rows, har row me 4 columns, sabki value 0.

- **Manual Initialization:**  
  ```cpp
  vector<vector<int>> mat = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
  };
  ```
  - Jab khud values set karni ho.

- **Dynamic Input:**  
  ```cpp
  int n, m;
  cin >> n >> m;
  vector<vector<int>> mat(n, vector<int>(m));
  for(int i = 0; i < n; i++)
      for(int j = 0; j < m; j++)
          cin >> mat[i][j];
  ```
  - User se size aur values input le rahe hain.

---

## 3. Traversal Patterns (Matrix Ko Kaise Traverse Karein)

- **Row-wise Traversal:**  
  ```cpp
  for(int i = 0; i < n; i++)
      for(int j = 0; j < m; j++)
          cout << mat[i][j] << " ";
  ```
  - Matlab ek row ke andar saare columns print karo, fir next row.

- **Column-wise Traversal:**  
  ```cpp
  for(int j = 0; j < m; j++)
      for(int i = 0; i < n; i++)
          cout << mat[i][j] << " ";
  ```
  - Matlab ek column ke andar saari rows print karo, fir next column.

---

## 4. Basic Problems & Patterns

### (A) Sum of All Elements:
```cpp
int sum = 0;
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
        sum += mat[i][j];
cout << sum;
```
- **Logic:** Har element ko add karte jao.

### (B) Row-wise Sum:
```cpp
for(int i = 0; i < n; i++) {
    int rowSum = 0;
    for(int j = 0; j < m; j++)
        rowSum += mat[i][j];
    cout << "Row " << i << " sum = " << rowSum << endl;
}
```
- **Logic:** Har row ka sum nikal ke print karo.

### (C) Max Element:
```cpp
int maxi = INT_MIN;
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
        maxi = max(maxi, mat[i][j]);
cout << "Max = " << maxi;
```
- **Logic:** Sabse bada element dhundo.

### (D) Count Even Numbers:
```cpp
int count = 0;
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
        if(mat[i][j] % 2 == 0) count++;
cout << count;
```
- **Logic:** Jitne even numbers hain, unka count.

---

## 5. Advanced Patterns

### (A) Transpose of Matrix:
```cpp
vector<vector<int>> transpose(m, vector<int>(n));
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
        transpose[j][i] = mat[i][j];
```
- **Logic:** Row ko column bana do, column ko row.

### (B) Boundary Traversal:
- Outer layer print karna: Top row, right column, bottom row (reverse), left column (reverse).

### (C) Spiral Traversal:
- 4 pointers use karo: `top`, `bottom`, `left`, `right`. Clockwise spiral me print karo.

### (D) Diagonal Traversal:
- Main diagonal: `i == j`
- Secondary diagonal: `i + j == n-1`

### (E) Rotate Matrix (90°):
1. Transpose karo
2. Har row ko reverse kar do

---

## 6. Pro Level Tricks

- **Direction Arrays (BFS/DFS ke liye):**
  ```cpp
  int dx[] = {0, 1, 0, -1};
  int dy[] = {1, 0, -1, 0};
  ```
  - Grid me direction change karne ke liye.

- **Visited Matrix:**
  ```cpp
  vector<vector<bool>> visited(n, vector<bool>(m, false));
  ```
  - DFS/BFS me repeat avoid karne ke liye.

- **In-place Operations:**  
  - Extra space bachane ke liye matrix ko directly modify karo.

---

## 7. Common Mistakes (Bachke Rehna!)

- `mat.size()` = rows, `mat[0].size()` = columns
- Empty matrix check: `if(mat.empty()) return;`
- Out of bounds: hamesha `<` use karo, `<=` nahi

---

## 8. Jagged Arrays (Har Row Ka Size Alag)

```cpp
vector<vector<int>> mat;
mat.push_back({1,2});
mat.push_back({3,4,5});
mat.push_back({6});
```
- Jab har row ka size alag ho, tab aise bana sakte ho.

---

## 9. Practice Problems Roadmap

- **Easy:** Row/column sum, transpose, reshape, set matrix zeroes
- **Medium:** Spiral matrix, rotate image, search in 2D matrix, word search
- **Hard:** Game of life, number of islands (DFS/BFS)

---

## 10. Mental Model (Sochne Ka Tarika)

- Hamesha grid visualize karo.
- Socho: "Main kis direction me move kar raha hoon?"
- Boundaries aur direction control karo, especially spiral/boundary problems me.

---

## ⭐ Sample Code: Input, Print, and Sum of Matrix

```cpp
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];

    // Print matrix
    cout << "Matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    // Sum of all elements
    int sum = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            sum += mat[i][j];
    cout << "Sum = " << sum << endl;
}
```

---

## 📋 Summary Table

| Concept                | Syntax/Logic Example                                 |
|------------------------|------------------------------------------------------|
| Empty 2D Vector        | `vector<vector<int>> mat;`                           |
| Fixed Size Init        | `vector<vector<int>> mat(n, vector<int>(m, 0));`     |
| Manual Init            | `{{1,2,3},{4,5,6}}`                                  |
| Input                  | Nested loops with `cin`                              |
| Print                  | Nested loops with `cout`                             |
| Row/Col Size           | `mat.size()`, `mat[0].size()`                        |
| Jagged Array           | `mat.push_back({1,2,3});`                            |
| Transpose              | `transpose[j][i] = mat[i][j];`                       |
| Spiral/Boundary        | 4 pointers: top, bottom, left, right                 |
| Direction Arrays       | `dx[]`, `dy[]` for BFS/DFS                           |

---

## 🚀 Next Steps

- Pehle basic problems (input, print, sum, row/col sum, max, transpose) khud likh ke dekho.
- Fir spiral, rotate, aur DFS/BFS grid problems pe jump karo.
- Har pattern ko visualize karo aur dry run karo (paper pe bhi).

---

**Ready for next level? Bol: "spiral start kar" 🚀**