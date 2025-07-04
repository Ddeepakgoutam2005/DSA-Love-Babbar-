//Character Array in C++
#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch -'A'+'a';
        return temp;
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

char getMaxOccCharacter(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch= s[i];
        int number = 0;
        number=ch-'a';
        arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans ;
}


int main(){
    // char name[20];
    // cout<<"Enter your name "<<endl;
    // cin>>name;
    // // name[2]='\0';   //null character
    // cout<<"Your name is "<<name<<endl;

    // int len = getLength(name);
    // cout<<"Length : "<<len<<endl;

    // reverse(name,len);
    // cout<<"Your name is "<<name<<endl;

    // cout<<"Palindrome or not: "<<checkPalindrome(name,len)<<endl;

    // cout<<"Character is "<<toLowerCase('b')<<endl;
    // cout<<"Character is "<<toLowerCase('A')<<endl;

    string s;
    cin>>s;
    cout<<s<<endl;

    cout<<getMaxOccCharacter(s)<<endl;

    return 0;
}