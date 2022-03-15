#include <iostream>
#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
       if(s.size() == 1){return ;}
       for(int i{}, j = s.size()-1; i < s.size()/2; ++i,--j)
       {
           std::swap(s[i],s[j]);
       }
    }
};

int main()
{
    return 0;
}