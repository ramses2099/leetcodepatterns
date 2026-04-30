#include <bits/stdc++.h>
#include "template.cpp"
#include <math.h>
using namespace std;

void longestsubarray(vector<int> &vec, int k)
{

    int n = vec.size();
    int l = 0, r = 0, sum = 0, maxlen = 0;

    while (r < n)
    {
        sum = sum + vec[r];

        while (sum > k)
        {
            sum = sum - vec[r];
            l = l + 1;
        }

        if (sum <= k)
        {
            maxlen = max(maxlen, (r - l + 1));
        }

        r++;
    }

    cout << "[ " << l << " " << r << " ]" << endl;
}

bool containduplicate(vector<int> &vec)
{
    int n = vec.size();
    unordered_set<int> hashset;

    for (int i = 0; i < n; i++)
    {
        pair<unordered_set<int>::iterator, bool> insert = hashset.insert(vec[i]);
        if (insert.second == false)
        {
            return true;
        }
    }

    return false;
}

int findShortestSubArray(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> first, second, count;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        if (first.count(nums[i]) == 0)
            first[nums[i]] = i;

        second[nums[i]] = i;
        count[nums[i]]++;
    }

    for (auto x : count)
        maxi = max(maxi, x.second);

    int ans = nums.size();
    for (auto x : count)
    {
        if (x.second == maxi)
        {
            ans = min(ans, second[x.first] - first[x.first] + 1);
        }
    }

    return ans;
}

vector<int> getConcatenation(vector<int> &nums)
{

    int n = nums.size();

    vector<int> ans(n * 2);

    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return ans;
}

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> ans;

    for (int i = 0, j = n; i < n && j < 2 * n; i++, j++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
    }

    return ans;
}

void print_vec(vector<int> &nums)
{
    int n = nums.size();
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {

        cout << nums[i] << " ";
    }
    cout << "]" << endl;
}

int main()
{

    // Example 1:

    // Input: nums = [2,5,1,3,4,7], n = 3
    // Output: [2,3,5,4,1,7]
    // Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

    // Example 2:

    // Input: nums = [1,2,3,4,4,3,2,1], n = 4
    // Output: [1,4,2,3,3,2,4,1]

    // Example 3:

    // Input: nums = [1,1,2,2], n = 2
    // Output: [1,2,1,2]

    // Use two pointers to create the new array of 2n elements.
    // The first starting at the beginning and the other starting at (n+1)th position.
    //  Alternate between them and create the new array.

    int n = 3;
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    print_vec(nums);

    vector<int> ans = shuffle(nums, n);

    print_vec(ans);

    return EXIT_SUCCESS;
}