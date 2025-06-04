//2D-Arrays
#include <iostream>
#include <climits>
using namespace std;

//need to give no. of cols in arr in case of 2d array
bool isPresent(int arr[][3],int target,int row,int col){
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            if(arr[r][c]==target){
                return 1;
            }
        }
    }
    return 0;
}

int largestRowSum(int arr[][3],int row,int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int r=0;r<row;r++){
        int sum=0;
        for(int c=0;c<col;c++){
            sum+=arr[r][c];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=r;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}

//To print row-wise sum
void printRowSum(int arr[][3],int row,int col){
    cout<<"Printing row sums->"<<endl;
    for(int r=0;r<row;r++){
        int sum=0;
        for(int c=0;c<col;c++){
            sum+=arr[r][c];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

//To print column-wise sum
void printColSum(int arr[][3],int row,int col){
    cout<<"Printing column sums->"<<endl;
    for(int c=0;c<col;c++){
        int sum=0;
        for(int r=0;r<row;r++){
            sum+=arr[r][c];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


int main(){
    //Creating 2D array
    // int arr[3][3];
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,14,16};
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    // cout<<"Enter the elements "<<endl;
    // //Taking row-wise inputs
    // for(int row=0;row<3;row++){
    //     for(int col=0;col<3;col++){
    //         cin>>arr[row][col];
    //     }
    // }

    // //Taking column-wise inputs
    // for(int col=0;col<3;col++){
    //     for(int row=0;row<3;row++){
    //         cin>>arr[row][col];
    //     }
    // }

    //Printing the array
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    /*cout<<"Enter the element to search "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Not found "<<endl;
    }
    */

    // int ansIndex = largestRowSum(arr,3,3);
    // cout<<"Max row sum is at index "<<ansIndex<<endl;

    printRowSum(arr,3,3);
    printColSum(arr,3,3);


    return 0;
}