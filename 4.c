//star
#include <stdio.h>
int main(){
    int n=3,i,o,p,j,max,k[2],m,min;
    if(n>2&&n<=1000)
        scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=0;
    for(i=0;i<n;i++){
        scanf("%d %d",&o,&p);
        a[o-1]+=1;
        a[p-1]+=1;
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            k[0]=i+1;
        }
        if(min>a[i])
        {
            k[1]=i+1;
        }
    }
    printf("%d %d",k[0],k[1]);
    return 0;
}
