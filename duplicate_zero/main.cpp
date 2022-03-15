#include <iostream>
#include <vector>

class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
     int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                arr.insert(arr.begin()+i,0);
                c++;
                i++;
            }
        }
        while(c--)
            arr.pop_back();
    }
};

int main()
{
    return 0;
}