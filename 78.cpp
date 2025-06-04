#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    //Creation    
    unordered_map<string,int> m;

    //Insertion
    //1
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);
    //2
    pair<string,int> pair2("love",2);
    m.insert(pair2);
    //3
    m["mera"]=1;
    //what will happen
    m["mera"]=2;   //value updation will happen

    //Search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;

    // cout<<m.at("unknownKey")<<endl; //give error,no element exist
    cout<<m["unknownKey"]<<endl;  //creates an element with 0 as value
    cout<<m.at("unknownKey")<<endl;


    //Size
    cout<<m.size()<<endl;

    //To check presence
    cout<<m.count("love")<<endl;  //gives 0 in case of absent and 1 in case of presence

    //erase
    m.erase("love");
    cout<<m.size()<<endl;

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){  //prints in random manner
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    //if we use map as data type then perfect order will print


    return 0;
}