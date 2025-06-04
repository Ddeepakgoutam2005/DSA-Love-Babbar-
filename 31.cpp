#include <iostream>
using namespace std;

int power(int n){   //gives the value of 2^n
    //base case
    if(n==0)
    return 1;
    //recursive relation
    return 2*power(n-1);
}

int factorial(int n){
    //base case
    if(n==0)
    return 1;
    return n*factorial(n-1);
}

void print(int n){  //print counting
    if(n==0){
        return;
    }
    
    cout<<n<<endl;  //Head recursion
    print(n-1);

    // print(n-1);
    // cout<<n<<endl;  //Tail recursion
}

int main(){
    int n;
    cin>>n;
    int ans1 = power(n);
    cout<<ans1<<endl;
    int ans2 = factorial(n);
    cout<<ans2<<endl;

    print(n);
    
    return 0;
}
