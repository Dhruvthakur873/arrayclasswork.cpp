#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];
    int sumOfArrayElmnts = 0;
    cout<<"Enter the elements of array one by one "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>array[i];
        sumOfArrayElmnts +=array[i];
    }
    cout<<"The total sum of all the elements of array is :" <<sumOfArrayElmnts;
}