// Your ode here...
#include <stdio.h> 
bubbleSort(int arr[] , int n){
    for(int i=0;i<n;i++){
    int flag = 0;
    for(int j=0; j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr [ j+1];
            arr[j+1]=temp;
            flag=1;
        }
    }
    if(flag==0){
        break;
    }
}
return 0;
}
printSorted(int arr[] , int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printSorted(arr,n);
    return 0;

    
}