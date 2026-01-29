#include<iostream>
using namespace std;

int search(int arr[],int target,int s,int e){
    if(s>e) return -1;

    int mid=s+(e-s)/2;
    if(arr[mid]==target) {
        cout<<arr[mid]<<endl;
        return mid;
    }
    if(target<arr[mid]){
        return search(arr,target,s,mid);
    }
    else{
        return search(arr,target,mid+1,e);
    }

}

int main(){
    int arr[]= {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int e=9; //(sizeof(arr)/sizeof(arr[0]))-1;
    int target=23;
    int n=search(arr,target,0,e);
    if(n==-1){
        cout<<"The number not found in the array";
    }
    else{
        cout<<"The number found at index: "<<n;
    }
}

//OUTPUT
//23
//The number found at index: 5
