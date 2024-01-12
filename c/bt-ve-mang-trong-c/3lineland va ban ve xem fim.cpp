#include <stdio.h>
int min(int a,int b){
	return a < b ? a : b;
}
int max(int a,int b){
	return a > b ? a : b;
}
int ck(int a[],int b ){
	int c25 = 0,c50 = 0; 
	for(int i = 0 ; i< b; i++){
		if(a[i]==25)c25++;
		else if(a[i]==50){
			if(c25 == 0)return 0;
			c25--;c50++; 
		}
		else if(a[i]==100){
			if(c25 == 0 || (c25* 25 + c50*50 < 75 ))return 0;
			if(c50!= 0)c25--,c50--;
			else{
				c25-=3;
			}
		} 
	} 
	return 1;
	
} 
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i< n ; i++) {
		scanf("%d",&a[i]);
	}
// bai 1 lineland 

	//	for(int i = 0 ;i < n; i++){
	//		if(i == 0)printf("%d %d\n",a[1]-a[0],a[n-1]-a[0]);
	//		else if(i == n - 1)printf("%d %d\n",a[n-1]-a[n-2],a[n-1]-a[0]);
	//		else printf("%d %d\n",min(a[i]-a[i-1],a[i+1]-a[i]),max(a[i]-a[0],a[n-1]-a[i]));
	//	}

// bai 2 ban ve xem fim 

if(ck(a,n))printf("yes");
else printf("no"); 
	
}
