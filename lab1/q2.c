#include<stdio.h>
//Find the sum of Prefix of an Array.
int main(){
   int size;
   printf("Enter size : ");
   scanf("%d",&size);
   
   int arr[size];
   for(int i=0;i<size;i++){
       printf("Enter elements : ");
       scanf("%d",&arr[i]);
  }
  
  int prefixSum[size];
  prefixSum[0]=arr[0];
   for(int i=1;i<size;i++){
     prefixSum[i] = prefixSum[i-1] + arr[i];
   }
   printf("prefix sum : ");
   for(int i=0;i<size;i++){
   	printf("%d",prefixSum[i]);
   	printf("\n");
   }
  
  
  
   

}  


