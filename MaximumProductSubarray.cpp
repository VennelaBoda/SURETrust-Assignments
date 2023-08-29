class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	   long long minValue, maxValue, maxProd;
	    minValue = maxValue = maxProd = arr[0];
	    
	    for(int i=1; i<n; i++){
	        if(arr[i] < 0){
	            swap(minValue,maxValue);
	        }
	        
	        minValue = min((long long)arr[i], arr[i]*minValue);
	        maxValue = max((long long)arr[i], arr[i]*maxValue);
	        maxProd = max(maxProd, maxValue);
	    }
	    
	    return maxProd;
	}
	
};
