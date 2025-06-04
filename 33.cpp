#include <iostream>
using namespace std;

void print(int arr[],int s ,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Binary Search using recursion method
bool binary_Search(int *arr,int s,int e,int k){
    //base case
    //element not found
    if(s>e){  
        return false;
    }
    int mid = s+(e-s)/2;
    //Element found
    if(arr[mid]==k)
        return true;

    if(arr[mid]<k){
        return binary_Search(arr,mid+1,e,k);
    }
    else{
        return binary_Search(arr,s,mid-1,k);
    }
}

bool linearSearch(int arr[],int size,int k){
    print(arr,0,size-1);
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}

bool isSorted(int arr[],int size){
    //base case
    if(size==0 || size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else{
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int getSum(int *arr,int size){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart = getSum(arr+1,size-1);
    int sum = arr[0]+remainingPart;
    return sum;
}

int main(){
    int arr[11]={2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;
    cout<<"Present or not "<<binary_Search(arr,0,size-1,key)<<endl;

    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    bool a = isSorted(arr,size);
    if(a){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }

    int sum = getSum(arr,size);
    cout<<"Sum is:"<<sum<<endl;


    return 0;
}