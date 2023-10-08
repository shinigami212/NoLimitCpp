#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        int i;
        for (i = 0; i < n; i++)
        {
            s.push(i);
        }
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (M[a][b] == 1)
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int c = s.top();
        for (i = 0; i < n; i++)
        {
            if (i == c)
            {
                continue;
            }
            if (M[c][i] != 0 || M[i][c] != 1)
            {
                return -1;
            }
        }
        return c;
    }
};

int main()
{
    // Example input matrix M and number of people n
    int n = 4;
    vector<vector<int>> M = {
        {0, 1, 0, 0},
        {0, 0, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0}};

    Solution obj;
    int celebrityIndex = obj.celebrity(M, n);

    if (celebrityIndex != -1)
    {
        cout << "The celebrity in the party is person " << celebrityIndex << "." << endl;
    }
    else
    {
        cout << "There is no celebrity in the party." << endl;
    }

    return 0;
}
