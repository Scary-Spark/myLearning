// TODO  https://www.naukri.com/code360/problems/allocate-books_1090540?interviewProblemRedirection=true&search=allocate%20books&leftPanelTabValue=SUBMISSION

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isValid(vector<int> nums, int students, int maxAllowedPages)
{
    int studentCount = 1;
    int pages = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums.at(i) > maxAllowedPages)
        {
            return false;
        }

        if (pages + nums.at(i) <= maxAllowedPages)
        {
            pages += nums.at(i);
        }

        else
        {
            studentCount++;
            pages = nums.at(i);
            if (studentCount > students)
            {
                return false;
            }
        }
    }
    return true;
}
int findMin(vector<int> nums, int students)
{
    /*
         1. first we can calculate the min and the max no of pages a student can get
         here min=0, max= sum of all the books;
         so, our solution will be between the min and the max

         2. then we can apply binary serch to get mid. and find if mid is a valid ans or not.
         3. if (not valid) then start=mid+1
         4. if (valid) then find the possible values i.e end=mid-1
    */

    if (nums.size() < students)
        return -1;

    int sum = 0;
    int ans = -1;
    for (int i : nums)
    {
        sum += i;
    }

    int start = 0, end = sum;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(nums, students, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter total number of books: ";
    cin >> size;
    vector<int> nums;

    cout << "enter the pages of each books: ";
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    int students;
    cout << "Enter the number of students: ";
    cin >> students;

    cout << findMin(nums, students) << endl;
}