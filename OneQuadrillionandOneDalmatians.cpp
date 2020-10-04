#include <stdio.h>
 
int main(){
    long long int banyakAnjing;
    scanf("%lld",&banyakAnjing);
 
    char name[100];
    int a=0;
    
    while(banyakAnjing!=0){
        banyakAnjing--;
        int b = banyakAnjing%26;
        name[a] ='a'+ b;
        banyakAnjing/=26;
        a++;
    }
    for(int j=a-1;j>=0;j--)	{
        printf("%c",name[j]);
    }
    return 0;
}
