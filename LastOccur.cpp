#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> vec, int i, int target)
{
    int n = vec.size();
    if (i == n)
    {
        return -1;
    }
    int idx = lastOccur(vec, i + 1, target);

    if (idx == -1 && vec[i] == target)
    {
        return i;
    }

    return idx;
}

int main()
{
    vector<int> vec = {1, 2, 3, 3, 2, 4, 5};
    int i = 0, target = 3;
    cout << lastOccur(vec, i, target) << endl;
    return 0;
}