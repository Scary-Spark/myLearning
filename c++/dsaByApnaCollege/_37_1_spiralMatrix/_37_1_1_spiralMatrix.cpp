#include <iostream>
#include <vector>
using namespace std;
vector<int> printSpiralMatrix(vector<vector<int>> &nums)
{
    int r = nums.size();
    int c = nums[0].size();

    int startRow = 0, startColomn = 0;
    int endRow = r - 1, endColomn = c - 1;

    vector<int> ans;
    while (startRow <= endRow && startColomn <= endColomn)
    {
        // top
        for (int j = startColomn; j <= endColomn; j++)
        {
            ans.push_back(nums[startRow][j]);
        }

        // right
        for (int i = startRow + 1; i <= endRow; i++)
        {
            ans.push_back(nums[i][endColomn]);
        }

        // bottom
        for (int j = endColomn - 1; j >= startColomn; j--)
        {
            if (startRow == endRow)
                break;
            ans.push_back(nums[endRow][j]);
        }

        // left
        for (int i = endRow - 1; i >= startRow + 1; i--)
        {
            if (startColomn == endColomn)
                break;
            ans.push_back(nums[i][startColomn]);
        }

        startRow++;
        endRow--;
        startColomn++;
        endColomn--;
    }
    return ans;
}
int main()
{
    vector<vector<int>> nums = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    vector<int> ans = printSpiralMatrix(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}