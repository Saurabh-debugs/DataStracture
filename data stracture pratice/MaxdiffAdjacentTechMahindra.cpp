# include<iostream>
using namespace std;
int adjdif(int arr[],int n){
   int temp =0;
   for(int i=0;i<n-1;i++){
   		int temp1 = arr[i]-arr[i+1];
   		if(temp1>temp){
   			temp = temp1;
		   }
	   
   }
   return temp;	
	
}
int main(){

int n,arr[20];
cout<<"Enter the value of n";
cin>>n;
cout<<"enter the array";
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int dif = adjdif(arr,n);
cout<<"Ans is "<<dif;
}
