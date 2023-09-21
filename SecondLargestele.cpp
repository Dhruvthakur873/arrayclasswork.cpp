// Find the maximum element in the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter the  size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array one by one :"<<endl;
    for(int i=0;i<=size-1;i++){
        cout<<"Enter the "<<i<<" element of the array : ";
        cin>>arr[i];
    }
    // int max= INT_MIN;
    // int index;
    // for(int i=0;i<=size-1;i++){
    //     if(arr[i]>max){
    //         // max = arr[i];
    //         index = i;
    //     }
    // }
    // arr[index]= INT_MIN;
    // for(int i=0;i<=size-1;i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //         index = i;
    //     }
    // }
    // cout<<"The Second largest ele in array is "<<max<<" and present at index "<<index;
    // 
    //Another approach 

    
    int max= INT_MIN;
    int indexMax;
    for(int i=0;i<=size-1;i++){
        if(max<arr[i]){
            max = arr[i];
            indexMax = i;
        }
    }
    cout<<"max is "<<max<<endl;

    int smax = INT_MIN;
    int smaxIndex;
    for(int i=0;i<=size-1;i++){
        if(arr[i]!=max && arr[i]>smax){
            smax = arr[i];
            smaxIndex = i;
        }
    }
    cout<<"The Second largest ele in array is "<<smax<<"     and present at index "<<smaxIndex;
    
}