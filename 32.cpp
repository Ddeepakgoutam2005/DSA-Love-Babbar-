#include <iostream>
using namespace std;

void reachHome(int src ,int dest){
    cout<<"source "<<src <<" destination "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<" pahuch gya "<<endl;
        return;
    }

    //Processing
    src++;

    //Recursive call
    reachHome(src,dest);

}

void sayDigit(int n,string arr[]){
    //base case 
    if(n==0)
    return;

    //processing
    int digit = n%10;
    n=n/10;

    //recursive call
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    int dest = 10;
    int src = 1;
    reachHome(src,dest);

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cin>>n;
    sayDigit(n,arr);
    



    return 0;
}