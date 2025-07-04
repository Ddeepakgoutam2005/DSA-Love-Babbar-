
// //Pointer in array
// #include <iostream>
// using namespace std;
// int main(){

//     // int arr[10]={23,122,41,67};
//     /*
//     cout<<"address of first memory block :"<<arr<<endl;
//     cout<<arr[0]<<endl;
//     cout<<"address of first memory block :"<<&arr[0]<<endl;

//     cout<<"4th "<<*arr<<endl;
//     cout<<"5th "<<*arr+1<<endl;
//     cout<<"6th "<<*(arr+1)<<endl;
//     cout<<"7th "<<*(arr)+1<<endl;
//     cout<<"8th "<<arr[2]<<endl;
//     cout<<"9th "<<*(arr+2)<<endl;
//     */

// //    int i=3;
// //    cout<<i[arr]<<endl;

// /*
//    int temp[10]={1,2};
//    cout<<sizeof(temp)<<endl;
//    cout<<"1st "<<sizeof(*temp)<<endl;
//    cout<<"2nd "<<sizeof(&temp)<<endl;
//    int *ptr = &temp[0];
//    cout<<sizeof(ptr)<<endl;
//    cout<<sizeof(*ptr)<<endl;
//    cout<<sizeof(&ptr)<<endl;

//     int a[20]={1,2,3,4,5};
//     cout<<"->"<<&a[0]<<endl;
//     cout<<&a<<endl;
//     cout<<a<<endl;
// */
//     //error
//     // a=a+1;    //not possible(content of symbol table can't be changed)

//     int arr[10]={23,122,41,67};
//     int *ptr = &arr[0];
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     ptr=ptr+1;   //possible
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

//     return 0;
// }




// //Pointer in Character Array [cout has different implimentations for array and char]
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     char ch[6]="abcde";  //one extra space for '0/'

//     cout<<arr<<endl;
//     //attention here
//     cout<<ch<<endl;

//     char *c = &ch[0];
//     //prints entire string
//     cout<<c<<endl;
//     char temp ='z';
//     char *p = &temp;

//     cout<<p<<endl;//print till it finds null character
//     return 0;
// }



//Pointer in functions
#include <iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p=p+1;  //will not change the origial address 
    // cout<<"Inside "<<p<<endl;
    *p=*p+1;  //will change the original value 
}

int getSum(int *arr,int n){   //same as arr[]
    cout<<"Size : "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i[arr];  //same as arr[i]
    }
    return sum;
}

int main(){
    /*
    int value =5;
    int *p =&value;
    // print(p);
    // cout<<"Before "<<*p<<endl;
    cout<<"Before "<<*p<<endl;
    update(p);
    cout<<"After "<<*p<<endl;
    */

   int arr[6]={1,2,3,4,5,8};
   cout<<"Sum is "<<getSum(arr+3,3)<<endl;

    return 0;
}
