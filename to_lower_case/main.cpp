#include <iostream>

class Solution {
public:
    std::string toLowerCase(std::string s) {
        for(int i{}; i < s.size(); ++i)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        return s;
    }
};

int main()
{
    return 0;
}