//Bubble Sort
#include <iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    for(int i=1;i<size;i++){
        bool swapped=false;
        for(int j =0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={5,4,3,2,1};
    bubbleSort(arr,5);
    printArray(arr,5);
    return 0;
}
