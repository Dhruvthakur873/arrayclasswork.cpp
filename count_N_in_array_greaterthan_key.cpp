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
    int key;
    cout<<"enter key: ";
    cin>>key;
    int count = 0;
    for(int i=0;i<=size-1;i++){
        if(arr[i]>key){
            count++;
        }
    }
    cout<<count<<" elements are greater than key,which is "<<key<<"  in this array";
}