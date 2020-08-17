/*
SUBARRAY WITH GIVEN SUM
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5
*/
#include<iostream>
using namespace std;
int find(int arr[], int num, int n)
{
	for(int i = 0; i < n; i++)
	{
		int sum = arr[i];
		
		for(int j =i+1; j< n; j++)
		{
			if(sum > num)
				break;
			if(sum == num)
			{
				cout<<i<<" "<<j-1;
				return 1;
			}
			sum = sum + arr[j];
			
		}
	}
	cout<<"Not found!!";
	return 0;
}
int find2(int arr[], int num, int n)
{
	int start = 0, sum=arr[0];	
	for(int i = 1; i < n; i++)
	{
		if(sum == num)
		{
			cout<<start<<" "<<i-1;
			return 1;
		}
		sum = sum + arr[i];
		if(sum > num)
		{
			sum = sum - arr[start];
			start++;
		}
	}
	cout<<"Not found";
}
int main()
{
	int arr[]={8,6,7,9,2,6};
	int num;
	num = 13;
	find2(arr,num,10);
	
}
