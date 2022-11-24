//count distinct element in an array

int countdistinct(int arr[], int n)
{
  unordered_set<int> s;
  for(int i=0;i<n;i++)
  {
    s.insert(arr[i]);
  }
  return s.size();
}
