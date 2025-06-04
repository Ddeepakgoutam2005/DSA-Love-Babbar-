// //Pivot element in a array : Smallest element in a rotated array.
// //Rotated array : when we rotate a sorted array.
// #include <iostream>
// using namespace std;

// int getPivot(int arr[],int n){
//     int s =0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[5]={4,5,6,10,2};
//     cout<<"Pivot is "<<getPivot(arr,5)<<endl;
//     return 0;
// }



// //Search any element in a rotated array
// #include <iostream>
// using namespace std;

// int getPivot(int arr[],int n){
//     int s = 0;
//     int e=n-1;
//     int mid= s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }

// int binarySearch(int arr[],int s , int e , int key){
//     int start=s;
//     int end=e;
//     int mid = start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(key>arr[mid]){
//             start = mid + 1;
//         }
//         else{
//             end=mid - 1;
//         }
//         mid= start + (end-start)/2;
//     }
//     return -1;
// }

// int main(){
//     int num[7]={4,5,6,7,0,1,2};
//     int n = 7;
//     int k = 0;

//     int pivot = getPivot(num,n);
//     int result;
//     if(k>=num[pivot] && k<=num[n-1]){
//         result= binarySearch(num,pivot,n-1,k);
//     }
//     else{
//         result= binarySearch(num,0,pivot-1,k);
//     }
//     cout<<"Element "<<k<<" is at index:"<<result<<endl;

//     return 0;
// }



// //Finding sqrt of a number using BS
// #include <iostream>
// using namespace std;

// long long int sqrtInteger(int n){
//     int s=0;
//     int e=n;
//     long long int mid=s+(e-s)/2;
//     long long int ans=-1;
//     while(s<=e){
//         long long int square = mid*mid;
//         if(square==n){
//             return mid;
//         }
//         else if (square<n){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// double morePrecision(int n,int precision , int tempSol){
//     double factor=1;
//     double ans = tempSol;
//     for(int i=0;i<precision;i++){
//         factor=factor/10;
//         for(double j=ans;j*j<n;j=j+factor){
//             ans=j;
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     int tempSol =sqrtInteger(n);
//     cout<<"Answer is "<<morePrecision(n,3,tempSol)<<endl;

//     return 0;
// }