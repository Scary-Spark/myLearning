#include <iostream>
#include <vector>
using namespace std;
int findHeight(vector<int> height)
{
    //? lp=leftPointer, rp=rightPointer
    int lp = 0, rp = height.size() - 1;
    int maxArea = 0;
    while (lp < rp)
    {
        int minHeight = min(height[lp], height[rp]);
        int width = rp - lp;
        int area = minHeight * width;
        if (area > maxArea)
        {
            maxArea = area;
        }
        if (height.at(lp) < height.at(rp))
        {
            lp++;
        }
        else
        {
            rp--;
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