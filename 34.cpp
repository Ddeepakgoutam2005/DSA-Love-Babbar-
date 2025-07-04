#include <iostream>
using namespace std;

//Reverse string
void reverse(string &str,int i,int j){
    cout<<"Call recieved for "<<str<<endl;
    //base case
    if(i>j)
        return ;
    swap(str[i],str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str,i,j);
}

//Check palindrome
bool checkPalindrome(string str,int i,int j){
    //base case
    if(i>j)
        return true;
    if(str[i]!=str[j])
        return false;
    else{
        //Recursive call
        return checkPalindrome(str,i+1,j-1);
    }
}

//Calculate Power
int power(int a , int b){
    //base case
    if(b==0)
        return 1;
    if(b==1)
        return a;
    //Recursive call
    int ans = power(a,b/2);
    //if b is even
    if(b%2==0){
        return ans*ans;
    }
    else{
        //if b is odd
        return a*ans*ans;
    }
}

//Bubble sort
void sortArray(int *arr,int n){
    //base case(already sorted)
    if(n==0||n==1){
        return;
    }
    //1 case solve karlia-largest element ko end me rakh dega
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //Recursive call
    sortArray(arr,n-1);
}

int main(){
    string name1 = "abcde";
    cout<<endl;
    reverse(name1,0,name1.length()-1);
    cout<<endl;
    cout<<name1<<endl;

    string name2 = "BookkooB";
    cout<<endl;
    bool isPalindrome = checkPalindrome(name2,0,name2.length()-1);
    if(isPalindrome){
        cout<<"It's a Palindrome"<<endl;
    }
    else{
        cout<<"It's not a Palindrome"<<endl;
    }

    // int a,b;
    // cin>>a>>b;
    // cout<<endl;
    // int ans = power(a,b);
    // cout<<"Answer is "<<ans<<endl;

    int arr[5]={2,5,1,6,9};
    sortArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}