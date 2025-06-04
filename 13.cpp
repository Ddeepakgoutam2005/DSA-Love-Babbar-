// // First and last occurrence of an element in a array
// #include <iostream>
// using namespace std;

// int firstOcc(int arr[], int size, int key)
// {
//     int start = 0, end = size - 1, ans = -1, mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int lastOcc(int arr[], int size, int key)
// {
//     int start = 0, end = size - 1, ans = -1, mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int arr[8] = {1, 2, 4, 4, 4, 6, 7, 8};
//     cout << "first occurrence of 4 is at index:" << firstOcc(arr, 8, 4) << endl;
//     cout << "Last occurrence of 4 is at index:" << lastOcc(arr, 8, 4) << endl;

//     return 0;
// }



// //Peak element in a mountain array
// #include <iostream>
// using namespace std;

// int peakElement(int arr[],int size){
//     int start =0;
//     int end=size-1;
//     int mid = start+(end-start)/2;
//     while(start<end){
//         if(arr[mid]<arr[mid+1]){
//             start = mid+1;
//         }
//         else{
//             end=mid;
//         }
//         mid=start+(end-start)/2;
//     }
//     return start;
// }

// int main(){
//     int arr[4]={3,5,4,1};
//     cout<<peakElement(arr,4)<<endl;



//     return 0;
// }
