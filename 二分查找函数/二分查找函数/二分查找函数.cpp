int bin_search(int arr[],int left,int right,int key){
	int mid=0;
	while(left<=right){
		mid=(left+right)/2;
		if(arr[mid]>key){
		right=mid-1;
	    }
	    else if(arr[mid]<key){
	    	left=arr[mid]+1;
		}
		else
		    return mid;
	}
	return -1;
}