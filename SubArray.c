#include<stdio.h>
void main() {

   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
   }

for(int Start=0;Start<n;Start++){
    for(int end=Start;end<n;end++){
        for(int i=Start ;i<=end;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

}

}