// *********************** Binary Search ********************
# include<stdio.h>
# include<stdlib.h>
int main()
{
	int arr[20];
	int low,mid,high,element,i;
	int size;
	printf("Enter the size of the array");
	scanf("%d",&size);
	printf("\n Please Enter the element in Sorted Order ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	low = 0;
	high = size-1;
	
	printf("Enter the element Which u want to Search ");
	scanf("%d",&element);
	// ***************** Binary Search ***************
	while(low<=high)
	{
	mid = (low+high)/2;
	if(arr[mid]==element)
	{
		printf("Element found at %d",mid);
		exit(0);
		}
		else if(arr[mid]<element)
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}
		
		}
		printf("Element not found");
	
}
