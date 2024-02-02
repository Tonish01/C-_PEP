#include<iostream>
using namespace std;

int linear(int arr[],int n,int k){
    int ans=0;
    int i=0;
    for(i;i<n;i++){
        if(arr[i] ==k ){
        ans =i+1;
        break;
        }
    }
    cout<<"Index of element is: "<<i<<endl;
    cout<<"position of element: "<<k <<"in array is :";
    return ans;

}

int main(){
 int n;
 cout<<"Enter the size array: "<<endl;
 cin>>n;
 cout<<"Enter the element in array: "<<endl;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int k;
 cout<<"Enter the No you want to find: "<<endl;
 cin>>k;
 cout<<linear(arr, n,k);
 return 0;



    return 0;
}