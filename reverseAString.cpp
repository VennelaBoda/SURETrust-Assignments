class Solution
{
    public:
    string reverseWord(string str)
    {
        
        int start=0;
	      int p=0;
	      for(int i=0;i<=str.length();i++)
	      {
		      if(str[p]==' ' || str[p]=='\0')
		      {
			      int end=p-1;
			      while(start<=end)
			      {
				      swap (str[start],str[end]);
				      start++;
				      end--;
			      }
			      start=p+1;
		      }
		      p++;
	      }
	      return str;
    }
};
