#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums)
    {
        if(nums.size() <= 1){return false;}
        std::set<int> obj;
        for(int i{}; i < nums.size(); ++i)
        {
            auto it = obj.insert(nums[i]);
            if(it.second == false){return true;}
        }
        return false;
    }
};

int main()
{
    return 0;
}