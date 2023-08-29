pair<long long, long long> getMinMax(long long a[], int n) {
    
    pair<long long int,long long int>p;
    int min=a[0];
    int max=a[0];
    
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    
    p.first=min;
    p.second=max;
    return p;
}
