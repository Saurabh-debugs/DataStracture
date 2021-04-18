# include<stdio.h>
int sum(int );
int main(){
	int n,result;
	printf("Enter the number");
	scanf("%d",&n);
	result = sum(n);
	printf("\nresult is ",result);
}
int sum(int n){
	int s=0,i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			s = s+i;
		}
}
	printf(s);
	return s;
}
