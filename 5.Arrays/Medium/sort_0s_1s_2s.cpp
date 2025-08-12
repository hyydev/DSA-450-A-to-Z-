#include <bits/stdc++.h>
using namespace std;

vector<int> sort_0_1_2(vector<int> &a) {
    int n = a.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        } else if (a[mid] == 1) {
            mid++;
        } else {
            swap(a[mid], a[high]);
            high--;
        }
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    vector<int> out = sort_0_1_2(array);
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << " ";
    }

    return 0;
}
