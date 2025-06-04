#include <iostream>
#include <vector>
using namespace std;

// Brute force approach
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Sieve of Eratosthenes
void sieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    cout << "Prime numbers up to " << n << " are: ";
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            cout << p << " ";
        }
    }
    cout << endl;
}

int gcd(int a , int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int fastExpo(int a , int b){    //*******
    int res=1;
    while(b>0){
        if(b&1){
            res=res*a;
        }
        b=b>>1;  //same as b/2 as bit operations need low memory expense
        a=a*a;
    }
    return res;
}

int main()
{
    /*int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"It is not a prime number"<<endl;
    }
    */

    /*int n;
    cout << "Enter the limit: ";
    cin >> n;
    sieveOfEratosthenes(n);
    */

   /*int a,b;
   cout<<"Enter the vaalues of a and b "<<endl;
   cin>>a>>b;
   int ans = gcd(a,b);
   cout<<"The gcd of "<<a <<" & "<<b<<" is "<<ans<<endl;
    */

   int a,b;
   cout<<"Enter the values of a and b "<<endl;
   cin>>a>>b;
   cout<<"Answer is "<<fastExpo(a,b)<<endl;

    return 0;
}