# include<stdio.h>
int main(){
	int n;
	int fib[n];
	int fib(int n){
		if(n==0 || n==1){
			return 1;
		}
		
		fib[0] = 0;
		fib[1] = 1;
		for(int i=2;i<n;i++){
			fib[i] = fib[i-1] + fib[i-2];
			return fib[n-1];
		}
	}
	int n,a;
printf("Enter the number");
scanf("%d",&n);	
a = fib(n);
printf(a);
  
}
