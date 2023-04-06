#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
  int n, k;
  cin>>n >>k;
  vector<int> nums(n);
  
  for(int i=0; i<n; ++i) {
    cin>> nums[i];
  }
  sort(nums.begin(), nums.end());
  int l=0, r=n-1, maxn=nums[n-1], minn=nums[0];
  int ans;
  for(int i=0; i<k; ++i) {
    int a1 = nums[l] * 2, tmpmin = min(a1, nums[l+1]), tmpmax = max(maxn, a1);
    int t1 = tmpmax - tmpmin;

    int a2 = nums[r] / 2;
    tmpmin = min(minn, a2);
    tmpmax = (a2, nums[r-1]);
    int t2 = tmpmax - tmpmin;

    if(t1 < t2) {
      ++l;
      minn = min(a1, nums[l]);
      maxn = max(maxn, a1);
      ans = t1;
    }
    else {
      --r;
      minn = min(minn, a2);
      maxn = max(a2, maxn);
      ans = t2;
    }
  }
  cout<<ans<<endl;
  return 0;
}