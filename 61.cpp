#include <iostream>
#include <queue>
using namespace std;

//K queues in s single array
class kQueue{
    public:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int freeSpot;
        int *next;
    kQueue(int n,int k){
        this->n=n;
        this->k=k;
        front=new int[k];
        rear=new int[k];
        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i]=-1;
        }
        next=new int[n];
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
        arr=new int[n];
        freeSpot=0;
    }
    void enqueue(int data,int qn){
        if(freeSpot==-1){
            cout<<"No empty space is present "<<endl;
            return;
        }
        int index=freeSpot;
        freeSpot=next[index];
        if(front[qn-1]==-1){
            front[qn-1]=index;
        }
        else{
            next[rear[qn-1]]=index;
        }
        next[index]=-1;
        rear[qn-1]=index;
        arr[index]=data;
    }
    int dequeue(int qn){
        if(front[qn-1]==-1){
            cout<<"Queue underflow"<<endl;
            return -1;
        }
        int index=front[qn-1];
        front[qn-1]=next[index];
        next[index]=freeSpot;
        freeSpot=index;
        return arr[index];
    }
};


//Sum of min & max elements of all subarrays of size k
int solve(int *arr,int n,int k){
    deque<int> maxi(k);
    deque<int> mini(k);
    //addition of first k size window
    for(int i=0;i<k;i++){
        while(!maxi.empty()&&arr[maxi.back()]<=arr[i])
            maxi.pop_back();
        while(!mini.empty()&&arr[mini.back()]>=arr[i])
            mini.pop_back();
        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans=0;
    ans+=arr[maxi.front()]+arr[mini.front()];
    //remaining window ko process karlo
    for(int i=k;i<n;i++){
        //next window
        //removal
        while(!maxi.empty()&&i-maxi.front()>=k){
            maxi.pop_front();
        }
        while(!mini.empty()&&i-mini.front()>=k){
            mini.pop_front();
        }
        //addition
        while(!maxi.empty()&&arr[maxi.back()]<=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty()&&arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
        ans+=arr[maxi.front()]+arr[mini.front()];
    }
    return ans;
}

int main(){
    // kQueue q(10,3);
    // q.enqueue(10,1);
    // q.enqueue(15,1);
    // q.enqueue(20,2);
    // q.enqueue(25,1);
    // cout<<q.dequeue(1)<<endl;
    // cout<<q.dequeue(2)<<endl;
    // cout<<q.dequeue(1)<<endl;
    // cout<<q.dequeue(1)<<endl;
    // cout<<q.dequeue(1)<<endl;


    int arr[7]={2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,k)<<endl;



    return 0;
}