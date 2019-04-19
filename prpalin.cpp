#define     upperLim 1003001
#include    <iostream>
#include    <vector>

using namespace std;

int     reverse(int);
void    delComposites(vector<unsigned int>&);
void    delNonpal(vector<unsigned int>&);

int main()
{
    int                     count = 0;
    int                     n;
    vector<unsigned int>    nums;
    vector<int>             pals;

    nums.push_back(0);
    nums.push_back(0);

    for(unsigned int i = 2; i <= upperLim; i++)
    {
        nums.push_back(i);
    }

    delComposites(nums);
    delNonpal(nums);

    for(unsigned int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != 0)
            pals.push_back(nums[i]);
    }

    nums.clear();

    cin >> n;

    if(n > 98689)
        cout << pals[pals.size() - 1];
    else
    {
        while(pals[count] < n)
            count++;
        cout << pals[count];
    }

    return (0);
}

// Delete composites
void delComposites(vector<unsigned int>& nums)
{
    for(unsigned int i = 2; i*i <= upperLim; i++)
    {
        if(nums[i] != 0)
        {
            for(unsigned int j = i*i; j <= upperLim; j += i)
            {
                nums[j] = 0;
            }
        }
    }
}

// Then delete non-palindromic primes
void delNonpal(vector<unsigned int>& nums)
{
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != reverse(nums[i]))
            nums[i] = 0;
    }
}

// Reverse number
int reverse(int num)
{
    int rev = 0;

    while(num > 0)
    {
        rev *= 10;
        rev += (num % 10);
        num /= 10;
    }

    return rev;
}

