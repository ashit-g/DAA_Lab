#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr,int s,int mid,int e){
    vector<int> arr2;
    int l=s;
    int r=mid+1;
    while(l<=mid && r<=e){
        if(arr[l]<=arr[r]){
            arr2.push_back(arr[l]);
            l++;
        }
        else{
            arr2.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid){
        arr2.push_back(arr[l]);
        l++;
    }
    while(r<=e){
        arr2.push_back(arr[r]);
        r++;
    }
    for(int i=s;i<=e;i++){
        arr[i]=arr2[i-s];
    }
}
void divide(vector<int> &arr,int s,int e){
    if(s==e) return;
    int mid=s+(e-s)/2;
    divide(arr,s,mid);
    divide(arr,mid+1,e);
    merge(arr,s,mid,e);
}


int main(){
    vector<int> arr={12,11,13,5,6,7};
    divide(arr,0,5);
    for(int x:arr){
        cout<<x<<"\t";
    }

}


//OUTPUT
//5       6       7       11      12      13
