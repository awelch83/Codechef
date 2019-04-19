#include <iostream>
using namespace std;

int main ()
{
    int numCases = 0;
    int nums[3];
    int temp = 0;
    cin >> numCases;

    for(int i = 0; i < numCases; i++)
    {
        bool unsorted = true;
        cin >> nums[0];
        cin >> nums[1];
        cin >> nums[2];
        
        while(unsorted)
        {      
            if(nums[0] > nums[1])
            {
                temp = nums[1];
                nums[1] = nums[0];
                nums[0] = temp;
            }
            else if(nums[0] > nums[2]) 
            {
                temp = nums[2];
                nums[2] = nums[0];
                nums[0] = temp;
            }
            else if(nums[1] > nums[2]) 
            {
                temp = nums[2];
                nums[2] = nums[1];
                nums[1] = temp;
            }
            else
                unsorted = false;
        }

        cout << nums[1] << endl;
    }

    return 0;
}

