//Pointers
#include <iostream>
using namespace std;
int main(){
    /*int num = 5;
    cout<<num<<endl;
    cout<<"Address of num is "<<&num <<endl;
    int *ptr=&num;
    cout<<"Address is :"<<ptr<<endl;
    cout<<"Value is :"<<*ptr<<endl;

    double d =4.3;
    double *p2 = &d;
    cout<<"Address is : "<<p2<<endl;
    cout<<"Value is :"<<*p2<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is "<<sizeof(p2)<<endl;
    */

//    int *p;  //bad practice(pointing to some garbage value)
//    cout<<*p<<endl;

 /* int i=5;
    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p=0; //
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;
*/
/*
    int num=5;
    int a = num;
    cout<<"a before "<<num<<endl;
    a++;
    cout<<"a after "<<num<<endl;

    int *p =&num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"After "<<num<<endl;

    //copying a pointer
    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;
    */

/*
    //important concept
    int i=3;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"Before t"<<t<<endl;
    t=t+1;  //points after 4 bytes
    cout<<"After t "<<t<<endl;
    cout<<*t<<endl;
*/

    
    return 0;
}