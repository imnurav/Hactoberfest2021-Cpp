/* 
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

--> 0 <= a, b, c, d < n
--> a, b, c, and d are distinct.
--> nums[a] + nums[b] + nums[c] + nums[d] == target

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

*/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>>res;
        if(nums.empty())
            return res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int target_2=target-nums[j]-nums[i];
                int front=j+1;
                int back=n-1;
                while(front<back)
                {
                    int sum=nums[front]+nums[back];
                    if(sum>target_2)
                        back--;
                    else if(sum<target_2)
                        front++;
                    else
                    {
                        vector<int>quard(4,0);
                        quard[0]=nums[i];
                        quard[1]=nums[j];
                        quard[2]=nums[front];
                        quard[3]=nums[back];
                        res.push_back(quard);
                        
                        //Removing duplicates of number 3 i.e. front
                        while(front<back && quard[2]==nums[front])
                            front++;
                        
                        //Removing duplicates of number 4 i.e. back
                        while(front<back && quard[3]==nums[back])
                            back--;
                    }
                }
                
                //Removing duplicates of number 2 i.e. j
                while(j+1<n && nums[j+1]==nums[j])
                    j++;
            }
            
            //Removing duplicates of number 1 i.e. i
            while(i+1<n && nums[i+1]==nums[i])
                i++;
        }
        return res;
    }

int main(){
	int n;
	cout<<"Enter Size of array: ";
	cin>>n;
	cout<<"Enter the array elements: ";
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int k;
	cout<<"Enter the target sum: ";
	cin>>k;
	vector<vector<int>>ress=fourSum(arr,k);
	for(int i=0;i<ress.size();i++)
		{for(int j=0;j<4;j++)
			cout<<ress[i][j]<<" ";
		cout<<endl;}
}
