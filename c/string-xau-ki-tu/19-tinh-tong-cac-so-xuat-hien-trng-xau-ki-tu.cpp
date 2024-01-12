#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int sum(char c[]){
    // int sum = 0;
    int max =-1e9;
    for(int i = 0;i < strlen(c);i++){
        int res = 0;
        while(isdigit(c[i]))res= res*10+c[i]-'0',i++;
        
        // sum+=res;
        if(res > max)max=res;
       
    }
    // return sum;
    return max;
}
int main(){
    char c[100],k[100];
    scanf("%s",c);
    printf("%d",sum(c));
    
     

}