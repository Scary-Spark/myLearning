#include <iostream>
#include <vector>
using namespace std;
int findHeight(vector<int> height)
{
    int maxArea = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int minHeight = min(height[i], height[j]);
            int width = j - i;
            int area = minHeight * width;
            if (area > maxArea)
            {
                maxArea = area;
            }
        }
    }
    return maxArea;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int ans = findHeight(height);
    cout << "Ans: " << ans << endl;
}