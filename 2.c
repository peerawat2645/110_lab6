//troll
#include <stdio.h>
int main(){
    int n,i,j=0,k,p=0,num,an;
    scanf("%d %d %d",&n,&num,&an);
    int a[n],b[n];
    for(i=0;i<n;i++){
        a[i]=num%10;
        num/=10;
        b[i]=an%10;
        an/=10;
    }
    for(i=0;i<n;i++){
        if(a[i]==b[i])
            j++;
        else
            p++;
    }
    printf("%d %d",j,p);
    return 0;
}
