#include <bits/stdc++.h>
using namespace std;

void Helper_reverse(vector<int>& nums, int si, int ei) {
    if (si >= ei) return;

    swap(nums[si], nums[ei]);
    Helper_reverse(nums, si + 1, ei - 1); // ✅ Fix here
}

void Rotate_by_D_places(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Always safe

    Helper_reverse(nums, 0, k - 1);     // Reverse first k
    Helper_reverse(nums, k, n - 1);     // Reverse rest
    Helper_reverse(nums, 0, n - 1);     // Reverse all
}

int main() {
    int n, d_places;
    cin >> n >> d_places;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    Rotate_by_D_places(arr, d_places);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}
