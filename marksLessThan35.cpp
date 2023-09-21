#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter numbr of students: ";
    cin>>n;
    int marks[n];
    cout<<"Enter marks of students one by one"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<"Enter marks of "<<i+1<<" student: ";
        cin>>marks[i];
        cout<<endl;
    }
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<"student having this "<<i+1<<" roll no. has marks less than 35"<<endl;
        }
    }
}