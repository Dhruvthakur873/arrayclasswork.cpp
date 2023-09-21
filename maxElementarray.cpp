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
    int max= INT_MIN;
    int index;
    for(int i=0;i<=size-1;i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    /*
    Another approach:

    int max = arr[0];
    for(int i=1;i<=size-1;i++){
        if(max<arr[i]){
            max = arr[i];
            index = i;
        }
    }
    */
    cout<<"The max ele in array is "<<max<<" and present at index "<<index;
}