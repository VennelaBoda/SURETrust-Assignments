class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int size=v.size();
		    int mid,x;
		    if(size%2==0){
		    mid=size/2;
		    x=(v[mid]+v[mid-1])/2;
		    }
		    else{
		    mid=(size)/2;
		    x=v[mid];
		    }
		  //  cout<<v[mid];
		  //int x=v[mid-1];
		  return x;
		}
};
