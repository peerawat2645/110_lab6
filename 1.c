#include<stdio.h>
#include <string.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    char letter[n][1000],tmp[1000];
    for(i=0;i<n;i++){
        scanf(" %[^\n]s",letter[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
            if (strcmp(letter[i],letter[j])>0){
                strcpy(tmp,letter[i]);
                strcpy(letter[i],letter[j]);
                strcpy(letter[j],tmp);
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",letter[i]);
    }
    return 0;
}
