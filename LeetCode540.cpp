#include <bits/stdc++.h>

using namespace std;


int singleNonDuplicate(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size();
        int m;
        while(start < end)
        {
            if(end-start == 1)
            {
                return nums[start];
            }
            m = (start + end)/2;
            int z = (m%2==0)?-1:1;
            if(nums[m+z] == nums[m])
            {
                end = m-1;
                continue;
            }
            else if(nums[m-z] == nums[m])
            {
                start = m+1;
                continue;
            }
            else
            {
                break;
            }
        }
        m = (start + end)/2;

        return nums[m];
        
}

int main()
{
    vector <int>v = {10,11,11};

    int a = singleNonDuplicate(v);

    cout << a << endl;
}