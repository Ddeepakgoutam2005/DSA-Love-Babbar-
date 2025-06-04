/*
//Reference variable 
#include <iostream>
using namespace std;

int& func(int a ){   //bad practice (return type is ref )
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n){
    int* ptr = &n;
    return ptr;
}

void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}

int main(){

    int i = 5;
    //create a ref variable
    int& j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    int n =5;
    cout<<"Before "<<n<<endl;
    // update1(n);  //no change in original variable
    update2(n);     //ref variable is passed so change will takes place in original variable
    cout<<"After "<<n<<endl;
    fun(n);    



    return 0;
}
*/



//Dynamic Memory
#include <iostream>
using namespace std;

int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n ;
    cin >> n;

    // int arr[n];  //bad practice as n may be greater than the available static memory

    //variable size array
    int* arr = new int[n];
    //taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = getSum(arr,n);
    cout<<"Answer is "<<ans<<endl;

    // //case1
    // while(true){
    //     int i =5;  //memory is automatically cleared 
    // }
    // //case2
    // while(true){   //program crashes at some point of time
    //     int* ptr = new int;  //no use of delete to clear memory
    // }



    return 0;
}