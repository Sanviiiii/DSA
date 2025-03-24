pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low=0;
	int high=n-1;
	int floor=-1,ceil=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]<=x){
			floor =a[mid];
			low=mid+1;
		}
		else{
			high =mid-1;
		}
		if(a[mid]>=x){
			ceil=a[mid];
			high=mid-1;
		}
		else low=mid+1;
	}
	return {floor,ceil};
}


//optimal
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low = 0, high = n - 1;
    int floor = -1, ceil = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoids overflow

        if (a[mid] == x) {
            return {x, x};  // If x is found, both floor and ceil are x
        }
        
        if (a[mid] < x) {  
            floor = a[mid];  // Store potential floor
            low = mid + 1;
        } 
        else {
            ceil = a[mid];  // Store potential ceil
            high = mid - 1;
        }
    }
    return {floor, ceil};
}