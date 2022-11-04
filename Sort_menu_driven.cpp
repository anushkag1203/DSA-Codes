// #include<iostream>
// using namespace std;
// class Array{
//     int *A;
//     int length;
//     int size;
//     Array(){
//         size=10;
//         length=5;
//         A=new int[length];
//     }
//     Array(int s,int l){
//         size=s;
//         length=l;
//     }
//     void display(){
//         for(int i=0;i<length;i++){
//             cout<<A[i]<<" ";
//         }
//     }
// }
// int main(){
    
//     return 0;}

#include <iostream>
using namespace std;
class Solution
{
public:
  int twoSum(int nums[], int target, int n)
  {

    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (nums[i] + nums[j] == target)
        {
          cout << i << " " << j;
          break;
        }
      }
    }
  }};
    int main()
    {
      Solution s;
      int nums[] = { 7, 11, 15,2};
      int target = 9;
      int n = sizeof(nums) / sizeof(nums[0]);
      s.twoSum(nums, target, n);
      return 0;
    }
