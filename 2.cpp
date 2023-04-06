#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
  int n;
  cin>>n;
  vector<int> nums(n);
  map<int, int> hashn;
  for(int i=0; i<n; ++i) {
    cin>>nums[i];
    hashn[nums[i]]++;
  }

  int ans = 0;
  for(auto &h: hashn) {
    if(hashn.count(h.first + 1) && hashn[h.first + 1] + hashn[h.first] >= 3) {
      if(hashn[h.first] >= 2) {
        ans += (hashn[h.first] * (hashn[h.first] - 1)) / 2 * hashn[h.first + 1];
      }
      if(hashn[h.first + 1] >= 2) {
        ans += (hashn[h.first + 1] * (hashn[h.first + 1] - 1)) / 2 * hashn[h.first];
      }
    }
  }
  cout<<ans<<endl;
  return ans;

}