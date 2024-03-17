// Write a program to print the matrix in wave form.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int j=0;j<n;j++){
        if(j%2!=0){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
            }
        }
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
