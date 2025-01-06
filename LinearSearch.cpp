#include <bits/stdc++.h>
using namespace std;
// function to perform linear search
int linear_S(const vector<int> &v, int target)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
            return i; // return the index where the target
    }
    return -1; // target not found
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n); // declear the vector size of n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    int result = linear_S(v, target);
    if (result != -1)
    {
        cout << " target found in index :" << result << endl;
    }

    else
    {
        cout << "target not found";
    }
    return 0;
}
