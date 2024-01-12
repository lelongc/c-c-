#include <stdio.h>

int main()
{   int n;scanf("%d",&n);
//bai 1 =====

//    for(int i = 1; i <= n;i++){
//        for(int j = 1;j <= n;j++){
//            int a =i+j;
//            if(a%2==0)printf("1");
//            else printf("0");
//        }
//        printf("\n");
//    }
    
 // bai 2  =====
 //c1 
 
  // for(int i = 1;i<= n;i++){
    //     int cnt = i;
    //     for(int j = 1; j <= n;j++){
    //         printf("%d",cnt);
    //         cnt++;
    //     }
    //     printf("\n");
    // }
//c2 

//    for(int i= 1;i <= n;i++){
//        for(int j = 1; j<= n;j++){
//            printf("%d",i+j-1);
//        }
//        printf("\n");
//    }
//bai 3 ====
 // c1 ||
 //	 int cnt = 1;
//    for(int i = 1;i <= n;i++){
//        
//        for(int j = 1; j <= n;j++){
//            // printf("%d ",cnt);
//            // cnt++;
//            printf("%d ",n*(i-1)+j);//c2 
//            
//        }
//        
//        printf("\n");
//    } 
    
    //bai 4 ====
    
//	    for(int i =1 ; i <= n;i++){
//        
//        for(int j = 1; j<= n;j++){
//            if(j <= n-i)printf("~");
//            else printf("%d",i);
//        }
//        printf("\n");
//    } 

	//bai 5 =====
	
//	   for(int i =1 ;i <= n;i++){
//        int init = i;
//        int cnt = n-1;
//        for(int j = 1;j <= i;j++){
//            printf("%d ",init);
//            init += cnt;
//            cnt--;
//            
//        }
//        printf("\n"); 
//	} 
}
