// //Double Pointer
// #include <iostream>
// using namespace std;

// void update(int **p2){
//     // p2=p2+1;  //no change
//     // *p2=*p2+1;  //yes
//     **p2=**p2+1;
// }

// void increment(int **p){
//     ++(**p);
// }

// int main(){
//     /*
//     int i = 5;
//     int *p = &i;
//     int **p2 = &p;

//     cout<<i<<endl;
//     cout<<*p<<endl;
//     cout<<**p2<<endl;

//     cout<<&i<<endl;
//     cout<<p<<endl;
//     cout<<*p2<<endl;

//     cout<<&p<<endl;
//     cout<<p2<<endl;

//     cout<<"before "<<i<<endl;
//     cout<<"before "<<p<<endl;
//     cout<<"before "<<p2<<endl;
//     update(p2);
//     cout<<"after "<<i<<endl;
//     cout<<"after "<<p<<endl;
//     cout<<"after "<<p2<<endl;
//     */

//     int num = 110;
//     int *ptr = &num;
//     increment(&ptr); //it is address hold by double pointer
//     cout<<num<<endl;

//     return 0;
// }




// //MCQ
// #include <iostream>
// using namespace std;



// // int main(){
//     // int first =8;
//     // int second =18;
//     // int *ptr = &second;
//     // *ptr =9;
//     // cout<<first<<" "<<second<<endl;

//     // int first = 6;
//     // int *p = &first;
//     // int *q =p;  //copying 
//     // (*q)++;
//     // cout<<first<<endl;

//     // int first = 8;
//     // int *p = &first;
//     // cout<<(*p)++<<" ";
//     // cout<<first<<endl;

//     // int *p = 0;  //Null pointer
//     // int first = 110;
//     // *p = first;  //error
//     // // p = &first;
//     // cout << *p << endl;

//     // int first = 8;
//     // int second = 11;
//     // int *third = &second; 
//     // first = *third;
//     // *third = *third + 2;
//     // cout  << first << "  " << second << endl;

//     // float f = 12.5;
//     // float p = 21.5;
//     // float *ptr = &f;
//     // (*ptr)++;
//     // *ptr = p;
//     // cout << *ptr << " " << f << " " << p << endl;

//     // int arr[5];
//     // int *ptr;
//     // cout << sizeof(arr) << " " << sizeof(ptr) << endl;

//     // int arr[] = {11, 21, 13, 14};
//     // cout << *(arr) << " " << *(arr+1) << endl;

//     // int arr[6] = {11, 12, 31};
//     // cout << arr << " " << &arr << endl;

//     // int arr[6] = {11, 21, 13};
//     // cout << (arr + 1) << endl;

//     // int arr[6] = {11, 21, 31};
//     // int *p = arr;
//     // cout << p[2] << endl;

//     // int arr[] = {11, 12, 13, 14, 15};
//     // cout << *(arr) << " " << *(arr + 3);

//     // int arr[] = {11, 21, 31, 41};
//     // int *ptr = arr++;  //error symbol table can't be modified
//     // cout << *ptr << endl;

//     // char ch = 'a';
//     // char* ptr = &ch;
//     // ch++;
//     // cout << *ptr << endl;

//     // char arr[] = "abcde";
//     // char *p = &arr[0];
//     // cout << p << endl;

//     // char arr[] = "abcde";
//     // char *p = &arr[0];
//     // p++;
//     // cout << p << endl;   

//     // char str[]= "babbar";
//     // char *p = str;
//     // cout << str[0] << " " << p[0] << endl;

    // int first = 10;
    // int *p = &first;
    // int **q = &p;
    // int second = 20;
    // *q = &second;
    // (*p)++;
    // cout << first << " " << second << endl;

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl; 


    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl; 


    // int arr[] = {41, 52, 36, 74};
    // int *p = (arr + 1);
    // cout << *arr + 8;


        // char *p; 
        // char str[] = "pqrstuv";
        // p = str;
        // p += 3;
        // cout << p;

    // char arr[20];
    //     int i;
    //     for(i = 0; i < 10; i++) {
    //         *(arr + i) = 65 + i;
    //     }
    //     *(arr + i) = '\0';
    //     cout << arr;

    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    //     float *ptr1 = &arr[0];
    //     float *ptr2 = ptr1 + 3;
    //     cout<<*ptr2<<" "<<ptr2<<" "<<ptr1<<endl;
    //     cout<< ptr2 - ptr1;  //***

    // char st[] = "ABCD";
    //     for(int i = 0; st[i] != '\0'; i++) {
    //         cout << st[i] << *(st)+i << *(i+st) << i[st]<<endl;
    //     }

//      int ***r, **q, *p, i=8;
//         p = &i;
//         (*p)++;
//         q = &p;
//         (**q)++;
//         r = &q;
//         cout<<*p << " " <<**q << " "<<***r;


//     return 0;
// }




// //MCQ of Pointers in functions
// #include <iostream>
// using namespace std;



// void update(int *p){
//         *p = (*p)  *  2;
//     }
// int main(){
//         int i = 10;
//         update(&i);
//         cout << i << endl;
//     }


// void fun(int arr[]) {
//         cout << arr[0] << " ";
//     }
//     int main() {
//         int arr[] = {11, 12, 13, 14};
//         fun(arr + 1);
//         cout << arr[0] << endl;
//     }


// void square(int *p){
//         int a = 70;
//         // p = &a;
//         *p = (*p) * (*p);
//     }
//     int main(){
//         int a = 70;
//         square(&a);
//         cout << a << endl;
//     }


// void increment(int **p){
//         ++(**p);
//     }

//     int main(){
//         int num = 110;
//         int *ptr = &num;
//         increment(&ptr);
//         cout << num << endl;
//     }  


// void Q(int z)
//     {
//         z += z;
//         cout<<z << " ";
//     }
//     void P(int *y) 
//     {
//         int x = *y + 2;
//         Q(x);
//         *y = x - 1; 
//         cout<<x << " ";
//     }
//     int main()
//     {
//         int x = 5;
//         P(&x);
//         cout<<x;
//         return 0;
//     }

// int f(int x, int *py, int **ppz) {
//         int y, z;
//         **ppz += 1;
//         z = **ppz;
//         *py += 2;
//         y = *py;
//         x += 3;
//         return x + y + z;
//     }

//     int main() {
//         int c, *b, **a;
//         c = 4;
//         b = &c;
//         a = &b;
//         cout << f(c, b, a);
//         return 0;
//     }