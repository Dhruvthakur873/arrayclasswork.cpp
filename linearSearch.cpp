#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the  size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array one by one :"<<endl;
    for(int i=0;i<=size-1;i++){
        cout<<"Enter the "<<i+1<<" element of the array : ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value of key: ";
    cin>>key;
    for(int i=0;i<=size-1;i++){
        if(arr[i]==key){
            cout<<"The key is present at the index : "<<i;
            break;
        }
        else cout<<"the element is not present in the array";
    }
}