//Finding total number of duplicate in an array

#include<stdio.h>

int main(){
   int size;
   printf("Enter size : ");
   scanf("%d",&size);
   
   int arr[size];
   printf("Enter elements : ");
     for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
     }
   
   //Sort the inputed array
     int temp;
     for(int i=0;i<size-1;i++){
     	for(int j=0;j<size-1-i;j++){
     	    if(arr[j]>arr[j+1]){
     	      temp = arr[j];
     	      arr[j] = arr[j+1];
     	      arr[j+1] = temp;
     	    }	
     	}
     }
     
     printf("Sorrted array : ");
     	for(int i=0;i<size;i++){
	   printf("%d",arr[i]);
	   printf("\n");	
       }
     
     int count = 0;
     for(int i = 1;i<size;i++){
     	if(arr[i]==arr[i-1]){
     	   count++;
     	}
     while(i < size && arr[i] == arr[i - 1]) {
             i++;	
      }
     printf("%d",count);

return 0;     
        }
} 
