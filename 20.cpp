// //Reverse an array
// #include <iostream>
// using namespace std;

// void reverse(int arr[],int n){
//     int s =0;
//     int e=n-1;
//     while(s<=e){
//         swap(arr[s++],arr[e--]);
//         // s++;
//         // e--;
//     }
// }

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// int main(){
//     int arr[7]={1,2,3,4,5,3,1};
//     printArray(arr,7);
//     reverse(arr,7);
//     printArray(arr,7);

//     return 0;
// }



// //Merge 2 sorted arrays
// #include <iostream>
// using namespace std;

// void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
//     int i=0,j=0,k=0;
//     while(i<n&&j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k++]=arr1[i++];
//         }
//         else{
//             arr3[k++]=arr2[j++];
//         }
//     }
//     while(i<n){
//         arr3[k++]=arr1[i++];
//     }
//     while(j<m){
//         arr3[k++]=arr2[j++];
//     }
// }

// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// int main(){
//     int arr1[5]={1,3,5,7,9};
//     int arr2[3]={2,4,6};
//     int arr3[8]={0};
//     merge(arr1,5,arr2,3,arr3);
//     print(arr3,8);

//     return 0;
// }



// //Move zeroes
// #include <iostream>
// using namespace std;

// void moveZeroes(int arr[],int n){
//     int i=0;
//     for(int j=0;j<n;j++){
//         if(arr[j]!=0){
//             swap(arr[j],arr[i]);
//             i++;
//         }
//     }
// }

// void print(int arr[],int n){
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// int main(){
//     int nums[5] = {0,1,0,3,12};
//     print(nums,5);
//     moveZeroes(nums,5);
//     print(nums,5);

//     return 0;
// }