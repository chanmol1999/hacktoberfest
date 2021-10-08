#include<iostream>
using namespace std;
void countingSort(int arr[],int n,int exp){
    int count[10],output[n];
    for(int i=0;i<10;i++){
        count[i]=0;

    }
    for(int i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
            }
    for(int i=0;i<10;i++){
        count[i]=count[i]+count[i-1];

    }      
    for(int i=n-1;i>=0;i--){
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }  
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}
void radixSort(int arr[],int n){
    int mx=arr[0];
    //findinf the maximum number in an array
    for(int i=1;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(int exp=1;mx/exp>=0;exp=exp*10){
        countingSort(arr,n,exp);

    }
     //print the array after sorting
    for(int i=0;i<n;i++){
     
        cout<<arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the total number of element: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" element ";
        cin>>arr[i];
    }
    //radixSort function call
    radixSort(arr,n);
   
return 0;
}
