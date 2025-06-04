// //Linear Search
// #include <iostream>
// using namespace std;

// bool search(int arr[],int size,int key){
//     for(int i = 0 ; i< size;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int a [] = {1,2,5,3,2,-6,7,0};
//     int key ;
//     cout<<"Give the searching element: "<<endl;
//     cin>>key;
//     cout<<search(a,8,key)<<endl;
//     return 0;
// }


// //Max & min in a array
// #include <iostream>
// #include <climits>
// #include <math.h>
// using namespace std;

// int getMin(int arr[],int size){
//     int mini = INT_MAX;
//     for(int i =0;i<size;i++){
//         mini=min(arr[i],mini);
//     }
//     return mini;
// }

// int getMax(int arr[],int size){
//     int maxi = INT_MIN;
//     for(int i=0;i<size;i++){
//         maxi=max(arr[i],maxi);
//     }
//     return maxi;
// }

// int main(){
//     int size;
//     cin>>size;
//     // int arr[size];  //bad practice
//     int arr[100];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"Maximumm value is :"<<getMax(arr,size)<<endl;
//     cout<<"Minimum value is :"<<getMin(arr,size)<<endl;
//     return 0;
// }


// //Reverse of an array
// #include <iostream>
// using namespace std;

// void reverse(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int a[6]={1,2,3,4,5,6};
//     int b[5]={4,5,6,2,1};
//     reverse(a,6);
//     reverse(b,5);
//     printArray(a,6);

//     printArray(b,5);
//     return 0;
// }