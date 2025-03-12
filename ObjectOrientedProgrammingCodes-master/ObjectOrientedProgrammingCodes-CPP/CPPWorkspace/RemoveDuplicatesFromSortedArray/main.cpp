 /////Remove Duplicates from Sorted Array\\\\\\\
---------------------------------------------------
// Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
//
//Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
//
//Example 1:
//
//Given nums = [1,1,2],
//
//Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
//
//It doesn't matter what you leave beyond the returned length.
//
//Example 2:
//
//Given nums = [0,0,1,1,1,2,2,3,3,4],
//
//Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.
//
//It doesn't matter what values are set beyond the returned length.

 
 #include <conio.h> 
 #include <iostream>
#include <vector>
using namespace std;

vector<int> nums{1,1};


void display()
{
    for(auto num : nums)  cout<<num<<" ";
}

int removeDuplicates(vector<int>& nums)
    {
        int flag{};
        int prevNum{};
        
       // cout<<"Size: "<<nums.size()<<endl;
        for(int i=0;i<nums.size();i++)
        {
            //cout<<num<<" ";
            //cout<<"Element: "<<nums.at(i)<<" Flag: "<<flag<<" Previous: "<<prevNum<<endl;
            //if(nums.at(i)==prevNum)
            {
                int temp=(nums.begin() + i);
                if(temp < nums.size())    nums.erase(nums.begin() + i);
            }
            //else nums.erase(nums.begin() + i);
            prevNum = nums.at(i);
            
        }
        display();
        return nums.size();
    }


int main()
{
    std::cout<< "Remove Duplicates from Sorted Array\n"<< std::endl;
    
    cout<<"Returned: "<<removeDuplicates(nums);
    getch();
    return 0;
}