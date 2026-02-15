#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &nums)
{
    int n = nums.size();
    vector<int> out;
    int max_from_right = nums[n - 1];
    out.push_back(max_from_right);

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] > max_from_right)
        {
            max_from_right = nums[i];
            out.push_back(max_from_right);
        }
    }
    reverse(out.begin(), out.end());
    return out;
}

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    vector<int> out = leaders(array);
    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i] << endl;
    }
}
