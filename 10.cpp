// //Swap alternate of an array
// #include <iostream>
// using namespace std;

// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size-1;i+=2){
//         swap(arr[i],arr[i+1]);
//     }
// }

// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr1[13]={12,34,5,6,0,3,2,1,4,5,6,7,8};
//     int arr2[6]={1,6,7,8,2,4};
//     swapAlternate(arr1,13);
//     swapAlternate(arr2,6);
//     printArray(arr1,13);
//     printArray(arr2,6);
//     return 0;
// }


// //Find number with unique no of occurrence.
// #include <iostream>
// using namespace std;

// int findUnique(int arr[] ,int size ){
//     int ans = 0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//         cout<<ans<<endl;
//     }
//     return ans;
// }

// int main(){
//     int arr[7]={2,3,1,6,3,6,1};
//     cout<<findUnique(arr,7)<<endl;
//     return 0;
// }


//Find duplicates in a array  *****


// //Intersection of an array
// #include <iostream>
// #include <vector>
// #include <algorithm> // for sorting
// using namespace std;

// vector<int> findArrayIntersection(int arr1[], int n, int arr2[], int m) {
//     int i = 0, j = 0;
//     vector<int> ans;
//     // Sort both arrays if they are not already sorted
//     sort(arr1, arr1 + n);
//     sort(arr2, arr2 + m);
//     // Traverse both arrays to find intersections
//     while (i < n && j < m) {
//         if (arr1[i] == arr2[j]) {
//             // Avoid adding duplicates
//             if (ans.empty() || ans.back() != arr1[i]) {
//                 ans.push_back(arr1[i]);
//             }
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j]) {
//             i++;
//         } 
//         else {
//             j++;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr1[5] = {1, 2, 3, 4, 5};
//     int arr2[4] = {3, 2, 1, 3};

//     vector<int> result = findArrayIntersection(arr1, 5, arr2, 4);

//     // Output the result
//     cout << "Intersection of arrays: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }


// //Sorting of zeroes and ones
// #include <iostream>
// using namespace std;

// void sortOne(int arr[],int n){
//     int left = 0,right=n-1;
//     while(left<right){
//         while(arr[left]==0 && left<right){
//             left++;
//         }
//         while(arr[right]==1 && left<right){
//             right--;
//         }
//         if(left<right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }
//     }
// }

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[8]={1,0,1,0,0,1,0,1};
//     sortOne(arr,8);
//     printArray(arr,8);
//     return 0;
// }


