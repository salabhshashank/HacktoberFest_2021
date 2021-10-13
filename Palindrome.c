#include<stdio.h>

int main(){
    int n;
    scanf("%d",n);

    char arr[n+1];
    scanf("%d",arr);

    int check=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }

    if(check==1){
        printf("Word is a palindrome");
    }
    else{
        printf("Word is not a palindrome.");
    }

    return 0;
}
