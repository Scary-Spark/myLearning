#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int maxMeetings(vector<int> &start, vector<int> &end)
{
    int count = 0;
    int minute = 0;
    for (int i = 0; i < start.size(); i++)
    {
        int difference = end.at(i) - start.at(i);
        minute += difference;
        if (minute >= start.at(i + 1))
        {
            count++;
        }
        else
        {
            return count;
        }
    }
}
int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    cout << maxMeetings(start, end);
}