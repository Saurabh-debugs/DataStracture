# include<iostream>

using namespace std;
int main(){
	int n=5;
	int i,j,arr[20],arr1[20];
	cout<<"enter the value";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	  for(i=0;i<n;i++){
	  	arr1[i] = arr[i];
	  }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			if(i==arr1[j]){
			//	cout<<j<<endl;
				arr1[j]=arr[i];
				break;
			}
		}
	}
	for(j=0;j<n;j++){
		cout<<arr1[j]<<" ";
	}
	
}
