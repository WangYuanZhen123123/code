// 将给定的数组中的元素进行波浪形排序，要求时间和空间复杂度尽可能低。
// 波浪形排序是指：arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] ...
// 例如：
// 输入：1, 2, 6, 7, 5, 3, 4
// 输出：4, 1, 7, 5, 6, 2, 3

#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0; i<n; ++i)
    cin>>nums[i];
  
  if(nums[0] < nums[1])
    swap(nums[0], nums[1]);
  if(nums[2] < nums[1])
    swap(nums[2], nums[1]);
  
  for(int i=2; i<n-1; ++i) {
    if(i&1 && nums[i+1] < nums[i])
      swap(nums[i], nums[i+1]);
    else if(i&1 == 0 && nums[i+1] > nums[i])
      swap(nums[i], nums[i+1]);
  }
  for(int i=0; i<n; ++i)
    cout<<nums[i]<<"  ";
  
  cout<<endl;
  return 0;
}
