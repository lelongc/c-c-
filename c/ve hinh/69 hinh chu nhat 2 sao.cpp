#include <stdio.h>
int main(){
	
	
//bai 1 

//int n;scanf("%d",&n);
//	for(int i = n;i>= 1;i--){
//		for(int j =1;j<=n;j++){
//			if(j<=i)printf("*");
//			else printf("~"); 
//		}
//		printf("\n"); 
//	} 
//	
	 
// bai 2 

//	int a,b;scanf("%d%d",&a,&b);
//	for(int i =1 ;i <= a;i++){
//		for(int j = 1; j <=i-1;j++){
//			printf("~"); 
//		} 
//		for(int j = 1; j <= b;j++){
//			printf("*"); 
//		}
//		printf("\n") ;
//	} 
 
 //bai 3 
// int n;scanf("%d",&n);
//	for(int i = 1; i <= n; i++){
// 		for(int j = 1; j <= n; j++){
// 			if(j <= n-i)printf("~");
//	 		else {
//				if(i == 1 || j == n || i == n || j == n-i+1)printf("*"); 
//	 			else printf(" "); 
//			}
//		}
//	 printf("\n"); 
// 	} 
//	 
#include <stdio.h>


    int n;
    printf("Nhap vao kich thuoc cua tam giac: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        // In ra ph?n tam giác ? trên cùng c?a h?nh
        for(int j = 1; j <= n-i; j++) {
            printf("~");
        }
        // In ra ph?n tam giác bên trong c?a h?nh
        for(int j = 1; j <= 2*i-1; j++) {
            if(i == n || j == 1 || j == 2*i-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // In ra ph?n tam giác ? dý?i cùng c?a h?nh
        for(int j = 1; j <= n-i; j++) {
            printf("~");
        }
        printf("\n"); // Xu?ng d?ng ð? in ra hàng ti?p theo c?a tam giác
    }
    return 0;
}

	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 

