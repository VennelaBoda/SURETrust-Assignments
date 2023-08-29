class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int m = array1.size();
        int n = array2.size();
        int m1 = -1;
        int m2 = -1;
        int i = 0;
        int j = 0;
        double ans = 0;
        for(int k=0;k<=(m+n)/2;k++){
            m2 = m1;
            if(i!=m && j!=n){
                if(array1[i]>array2[j]){
                    m1 = array2[j++];
                }
                else{
                    m1 = array1[i++];
                }
            }
            else if(i<m){
                m1 = array1[i++];
            }
            else{
                m1 = array2[j++];
            }
        }
        if((m+n)%2==0){
            ans = (m1+m2)/2.0;
        }
        else{
            ans = m1;
        }
        return ans;
    
    }
};
