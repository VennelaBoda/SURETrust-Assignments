class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        //  sort(arr,arr+n);
    	int flag=1;
    	vector<long long>arr1(n);
    	int i=0;
    	int j=n-1;
    	int k=0;
    	while(i<=j){
    	    if(flag){
    	        arr1[k]=arr[j];
    	        k++;
    	        j--;
    	        flag=0;
    	    }
    	    else{
    	        arr1[k]=arr[i];
    	        k++;
    	        i++;
    	        flag=1;
    	    }
    	    
    	}
    	for(int i=0;i<n;i++){
    	    arr[i]=arr1[i];
    	}
    	 
    }
};
