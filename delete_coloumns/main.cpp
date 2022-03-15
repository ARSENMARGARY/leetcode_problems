#include <iostream>
#include <vector>

class Solution {
public:
    int minDeletionSize(std::vector<std::string>& strs) {
        int vec_size = strs.size();
        int elem_size = strs[0].size();
        int count{};
        for(int i{}; i < elem_size; ++i)
        {
            for(int j{}; j < vec_size - 1; ++j)
            {
                if(strs[j][i] > strs[j+1][i])
                {
                    ++count;
                    break;
                }
            }
        }
        return count;
    }
};

int main()
{
    return 0;
}