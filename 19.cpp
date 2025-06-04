//STL(Standard Template Library) in C++ :Algorithms and Containers

#include <iostream>
using namespace std;
// #include <bits/stdc++.h>    //To include all STL libraries in single statement



// #include <array>
// int main(){
//     int basic[3]={1,2,3};
//     array<int,4> a ={1,2,3,4};
//     int size = a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"Element at 2nd index:"<<a.at(2)<<endl;
//     cout<<"Empty or not->"<<a.empty()<<endl;
//     cout<<"First element->"<<a.front()<<endl;
//     cout<<"Last element->"<<a.back()<<endl;
//     cout<<"Last element->"<<a[3]<<endl;



//     return 0;
// }



// #include <vector>
// int main(){
//     vector <int> v;
    
//     cout<<"Capacity->"<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<"Capacity->"<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"Capacity->"<<v.capacity()<<endl;
//     //vector dynamically changes its capacity like 0,1,2,4,8...
//     v.push_back(3);
//     cout<<"Capacity->"<<v.capacity()<<endl;
//     //size() denotes no. of elements in vector while capacity() gives total no of available spaces in vector.
//     cout<<"Size-->"<<v.size()<<endl;

//     cout<<"Element at 2nd index:"<<v.at(2)<<endl;
//     cout<<"Front element :"<<v.front()<<endl;
//     cout<<"back element :"<<v.back()<<endl;

//     cout<<"Before pop :"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.pop_back(); //remove last element

//     cout<<"After pop: "<<endl;
//     for(int i : v){
//         cout<<i<<" ";
//     }cout<<endl;

//     vector <int> a(5,1);
//     cout<<"Printing  a: "<<endl;
//     for(int i : a){
//         cout<<i<<" ";
//     }cout<<endl;

//     vector<int> last(a);
//     cout<<"Printing last: "<<endl;
//     for(int i : last){
//         cout<<i<<" ";
//     }cout<<endl;



//     return 0;
// }



// #include <deque>
// int main(){
//     deque <int> d;
//     d.push_back(1);
//     d.push_front(2);
//     cout<<"Print first index element:"<<d.at(1)<<endl;
//     cout<<"front "<<d.front()<<endl;
//     cout<<"back "<<d.back()<<endl;
//     cout<<"Empty or not :"<< d.empty()<<endl;
//     cout<<"Before erase "<<d.size()<<endl;
//     for(int i : d){
//         cout<<i<<" ";
//     }cout<<endl;
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"After erase "<<d.size()<<endl;

//     for(int i : d){
//         cout<<i<<endl;
//     }



//     return 0;
// }




// #include <list>
// int main(){

//     list <int> l;
//     list <int> n(5,100);
//     cout<<"Printing n"<<endl;
//     for(int i:n){
//         cout<<i<<" ";
//     }cout<<endl;
//     l.push_back(1);
//     l.push_front(2);
//     for(int i : l){
//         cout<<i<<" ";
//     }cout<<endl;

//     l.erase(l.begin());
//     cout<<" After erase"<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<" size of list l is "<<l.size()<<endl;

//     return 0;
// }



// #include <stack>
// int main(){
//     stack<string> s;
//     s.push("love");
//     s.push("babbar");
//     s.push("kumar");
//     cout<<"Top element ->"<<s.top()<<endl;
//     s.pop();
//     cout<<" Top element->"<<s.top()<<endl;
//     cout<<"Size of stack "<<s.size()<<endl;
//     cout<<"Empty or not "<<s.empty()<<endl;

//     return 0;
// }




// #include <queue>
// int main(){
//     queue <string> q;
//     q.push("love");
//     q.push("babbbar");
//     q.push("kumar");
//     cout<<"Size before pop "<<q.size()<<endl;
//     cout<<"First element "<<q.front()<<endl;
//     q.pop();
//     cout<<"first element "<<q.front()<<endl;
//     cout<<"Size after pop "<<q.size()<<endl;

//     return 0;
// }



// //Priority queue
// #include <queue>
// int main(){
//     //max heap
//     priority_queue <int> maxi;

//     //min heap
//     priority_queue <int,vector<int>,greater<int>> mini;

//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(0);

//     cout<<"Size ->"<<maxi.size()<<endl;
//     int n = maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(5);
//     mini.push(1);
//     mini.push(0);
//     mini.push(4);
//     mini.push(3);

//     int m = mini.size();
//     for(int i=0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;

//     cout<<"Empty or not "<<mini.empty()<<endl;


//     return 0;
// }



// #include <set>
// int main(){

//     set <int> s;

//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(6);
//     s.insert(6);
//     s.insert(0);
//     s.insert(0);
//     s.insert(0);

//     for(auto i: s){
//         cout<<i<<endl;
//     }cout<<endl;

//     set <int> :: iterator it = s.begin();
//     it++;
//     s.erase(it);
//     for(auto i: s){
//         cout<<i<<endl;
//     }cout<<endl;

//     cout<<"-5 is present or not ->"<<s.count(-5)<<endl;
//     set<int>::iterator itr = s.find(5);
//     for(auto it=itr;it!=s.end();it++){
//         cout<<*it<<" ";
//     }cout<<endl;

//     return 0;
// }



// #include <map>
// int main(){
//     map<int ,string> m;
//     m[1]="babbar";
//     m[13]="kumar";
//     m[2]="love";
//     m.insert({5,"bheem"});
//     cout<<"Before erase "<<endl;
//     for(auto i: m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<"Finding -13 ->"<<m.count(-13)<<endl;

//     // m.erase(13);
//     cout<<"After erase"<<endl;
//     for(auto i :m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     auto it = m.find(5);

//     for(auto i =it ; i!=m.end();i++){
//         cout<<(*i).first<<endl;
//     }


//     return 0;
// }



// #include <algorithm>
// #include <vector>
// int main(){
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(7);

//     cout<<"Finding 6 ->"<<binary_search(v.begin(),v.end(),6)<<endl;
//     cout<<"Lower bound ->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; //*****

//     cout<<"Upper bound ->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;//*****

//     rotate(v.begin(),v.begin()+1,v.end());
//     cout<<"After rotate"<<endl;

//     for(int i : v ){
//         cout<<i<<" ";
//     }cout<<endl;

//     int a=3;
//     int b=5;
//     cout<<"max ->"<<max(a,b);
//     cout<<"min ->"<<min(a,b);

//     swap(a,b);
//     cout<<endl<<"a->"<<a<<endl;

//     string abcd="abcd";
//     reverse(abcd.begin(),abcd.end());
//     cout<<"String->"<<abcd<<endl;

    
    

//     return 0;
// }
