#include <iostream>


bool isBadVersion(int);


class Solution {
public:
   int firstBadVersion(int n) {
        long long int start,end,mid;
        start = 1 , end = n;
        long int pos = 1;
        while(start<=end){
            mid = start + (end-start)/2;
            bool x = isBadVersion(mid);
            if(x){
                pos = mid;
                end = mid-1;
            }
            else
                start = mid+1;
        }
        return pos;
    }
};


int main()
{
    return 0;
}