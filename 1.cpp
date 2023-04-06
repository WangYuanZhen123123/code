vector<int> root(n+1, 0);
root[tree[i][0]] = 1;
root[tree[i][1]] = 1;
for(int i=1; i<=n; ++i) {
  if(root[i] == 0) {
    r = i;
    break;
  }
}
