//Frequency of Array Element
//time: o(n)
//space: o(n)

int CountFreq(int arr[],int n)
{
  unodered_map<int,int> h;
  for(int i=0;i<n;i++)
    h[arr[i]]++;
  for(auto e:h)
    cout<<e.first<<" "<<e.second<<endl;
}
