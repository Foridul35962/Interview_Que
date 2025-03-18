//Problem link: https://leetcode.com/problems/majority-element/description/

/*
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
           map<int,int>m;
           for(auto u:nums)
           {
                m[u]++;
           }
           for(auto u:m)
           {
                if(u.second>nums.size()/2)
                    return u.first;
           }
           return -1;
        }
    };
*/



#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
    private:
        int n,a;
        vector<int>nums;
    public:
        int majorityElement() {
           map<int,int>m;
           for(auto u:nums)
           {
                m[u]++;
           }
           for(auto u:m)
           {
                if(u.second>nums.size()/2)
                    return a=u.first;
           }
           return a=-1;
        }
        void input();
        void dis();
    };
    void Solution::input()
    {
        cout<<"Enter the size of array: ";
        cin>>n;
        cout<<"Enter all element: ";
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            nums.push_back(a);
        }
    }
    void Solution::dis()
    {
        cout<<"Majority Element: "<<a<<endl;
    }
int main()
{
    Solution obj;
    obj.input();
    obj.majorityElement();
    obj.dis();
    return 0;
}