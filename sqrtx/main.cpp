#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1){return x;}
        int low{};
        int mid{};
        int high = x;
        while((high - low) > 1)
        {
            mid = low + (high - low) / 2;
            if(mid == (x / mid)){return mid;}
            if(mid > (x / mid)){high = mid;}
            if(mid < (x / mid)){low = mid;}
        }
        return low;
    }
};


int main()
{
    return 0;
}