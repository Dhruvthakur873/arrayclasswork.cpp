#include<iostream>
using namespace std;
int main(){
    // int  array[5];
    // array[1] = 5;
    // array[0] = 8;
    // cout<<array[1];
    // //output  : 5;

    /*
    Now Initialisation with declaration 
    */
    // int arr[] = {1,2,3,4,5};
    // // We can print the elements of array using for loop
    // for(int i=0;i<=4;i++){  // output : 1 2 3 4 5
    //     cout<<arr[i]<<endl;
    // }
    // we also take input using for loop
    int arr[5];
    for(int i=0;i<=4;i++){  // output : 1 2 3 4 5
        cout<<"Enter "<<i<<"th element:  ";
        cin>>arr[i];
        cout<<endl;
    }

}