#include <iostream>
using namespace std;
int twoSum(int *num, int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((num[i] + num[j]) == target)
            {
                return num[i] + num[j];
            }
        }
    }
}
int main()
{
    int num[] = {
        2,
        7,
        12,
        1,
    };
    int target = 9;
    int n = sizeof(num) / sizeof(int);
    twoSum(num, n, target);
    return 0;
}
