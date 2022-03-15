#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int start{};
        int end = nums.size() - 1;
        int mid{};
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            if(nums[mid] == target){return mid;}
            if(nums[mid] > target){end = mid - 1;}
            if(nums[mid] < target){start = mid + 1;}
        }
        return -1;
    }
};


int main()
{
    return 0;
}