#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count the number of points lying within each segment
vector<int> count_points_in_segments(vector<int> &points, vector<pair<int, int>> &segments)
{
    vector<int> result;

    for (auto &segment : segments)
    {
        int count = 0;
        int A = segment.first;
        int B = segment.second;

        // Count the points within the segment
        for (int point : points)
        {
            if (A <= point && point <= B)
            {
                count++;
            }
        }

        result.push_back(count);
    }

    return result;
}

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int n, q;
        cin >> n >> q; // Number of points and segments

        // Input points
        vector<int> points(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> points[i];
        }

        // Input segments
        vector<pair<int, int>> segments(q);
        for (int i = 0; i < q; ++i)
        {
            cin >> segments[i].first >> segments[i].second;
        }

        // Call the function to count points in segments and print the result
        vector<int> counts = count_points_in_segments(points, segments);
        for (int count : counts)
        {
            cout << count << endl;
        }
    }

    return 0;
}
