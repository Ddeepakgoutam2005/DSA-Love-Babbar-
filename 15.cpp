// //Allocate Books
// #include <iostream>
// using namespace std;

// bool isPossible(int arr[],int n,int m,int mid){
// 	int studentCount=1;
// 	int pageSum=0;
// 	for(int i=0;i<n;i++){
// 		if(pageSum+arr[i]<=mid){
// 			pageSum+=arr[i];
// 		}
// 		else{
// 			studentCount++;
// 			if(studentCount>m||arr[i]>mid){
// 				return false;
// 			}
// 			pageSum=arr[i];
// 		}
// 	}
// 	return true;
// } 

// int allocateBooks(int arr[], int n, int m)
// {
// 	int s =0;
// 	int sum=0;
// 	for(int i =0;i<n;i++){
// 		sum+=arr[i];
// 	}
// 	int e=sum;
// 	int ans =-1;
// 	if(n<m){
// 		return -1;
// 	}
// 	int mid = s+(e-s)/2;
// 	while(s<=e){
// 		if(isPossible(arr,n,m,mid)){
// 			ans=mid;
// 			e=mid-1;
// 		}
// 		else{
// 			s=mid+1;
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return ans;
// }
// int main(){
//     int book1[4]={10,20,30,40};
//     int book2[5]={10 ,20 ,30, 40 ,50};
//     cout<<allocateBooks(book1,4,2)<<endl;
//     cout<<allocateBooks(book2,5,6)<<endl;
//     return 0;
// }




// //Aggressive Cows
// #include <iostream>
// #include <algorithm> // For sort function
// using namespace std;

// bool isPossible(int stalls[], int k, int mid, int n) {
//     int cowCount = 1;
//     int lastPos = stalls[0];
//     for (int i = 1; i < n; i++) { // Start from i=1 because cow is placed at stalls[0]
//         if (stalls[i] - lastPos >= mid) {
//             cowCount++;
//             if (cowCount == k) {
//                 return true;
//             }
//             lastPos = stalls[i];
//         }
//     }
//     return false;
// }
// int aggressiveCows(int stalls[], int n, int k) {
//     sort(stalls, stalls + n); // Sort the array
//     int s = 0;
//     int e = stalls[n - 1] - stalls[0]; // The maximum possible distance between the cows
//     int ans = -1;
//     int mid = s + (e - s) / 2;
//     while (s <= e) {
//         if (isPossible(stalls, k, mid, n)) {
//             ans = mid; // Store the result if placing cows with distance `mid` is possible
//             s = mid + 1; // Try for a larger minimum distance
//         } else {
//             e = mid - 1; // Try for a smaller minimum distance
//         }
//         mid = s + (e - s) / 2;
//     }

//     return ans;
// }

// int main() {
//     int arr[5] = {4, 2, 1, 3, 6};
//     int n = 5;
//     int k = 2;

//     cout << "Maximum minimum distance: " << aggressiveCows(arr, n, k) << endl;

//     return 0;
// }
