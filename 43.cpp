#include <iostream>
using namespace std;

/*
1. Pillars of OOPS:Encapsulation,Inheritance,Abstraction,Polymorphism
2.Encapsulation : Information Hiding/Data Hiding or wrapping up data members and functions
3.Fully encapsulated class : class in which all data members(only variables/properties) are declared private.
Benefits : data members are accessible in same class only,increase security,may make class as read only,unit testing.
4. Modes of inheritance:

In_super_class  +     Mode           =        In_sub_class
    public      +    public          =           public
    public      +    private         =           private
    public      +    protected       =           protected
    protected   +    public          =           protected
    protected   +    protected       =           protected
    protected   +    private         =           private
    private     +    public          =           NA
    private     +    protected       =           NA
    private     +    private         =           NA


5.Polymorphism : i.Compile time/static : function and operator overloading
                ii.Runtime/Dynamic : Method overriding(inheritance is must)
For function overloading , no of parameters or types of parameters must differ.Only different return types are not sufficient for function overloading. 
*/

// //1.Concept.cpp
// class Student{
//     private:
//     string name;
//     int age;
//     int height;
//     public:
//     int getAge(){
//         return age;
//     }
// };

// //2.Inheritance.cpp
// class Human{
//     private:
//     int height;
//     int age;
//     public:
//     int weight;
//     int getAge(){
//         return age;
//     }
//     void setWeight(int w){
//         weight=w;
//     }
// };

// class Male : private Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return height;
//     }
// };

// //3.Single inheritance
// class Animal{
//     public:
//     int age;
//     int weight;
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };

// class Dog: public Animal{

// };

// //4
// class GermanShepherd : public Dog{

// };

// //5.Multiple Inheritance
// class Animal{
//     public:
//     int age;
//     int weight;
//     void bark(){
//         cout<<"Barking"<<endl;
//     }
// };
// class Human{
//     public:
//     string color;
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Hybrid : public Animal,public Human{

// };

// //6.Hierarchical Inheritance
// class A{
//     public:
//     void func1(){
//         cout<<"Inside function1"<<endl;
//     }
// };
// class B: public A{
//     public:
//     void func2(){
//         cout<<"Inside function2"<<endl;
//     }
// };
// class C:public A{
//     public:
//     void func3(){
//         cout<<"Inside function3"<<endl;
//     }
// };

// //7.Ambiguity.cpp
// class A{
//     public:
//     void func(){
//         cout<<"I am A"<<endl;
//     }
// };
// class B{
//     public:
//     void func(){
//         cout<<"I am B"<<endl;
//     }
// };
// class C : public A,public B{

// };

// //8.Polymorphism.cpp
// class A{
//     public:
//     void sayHello(){
//         cout<<"Hello Love Babbar"<<endl;
//     }
//     int sayHello(char name){
//         cout<<"Hello Love Babbar"<<endl;
//         return 1;
//     }
//     void sayHello(string name){
//         cout<<"Hello "<<name<<endl;
//     }
// };
// class B{
//     public:
//     int a;
//     int b;
//     int add(){
//         return a+b;
//     }
//     void operator+ (B &obj){
//         int value1 = this->a;
//         int value2 = obj.a;
//         cout<<"Output:"<<value2-value1<<endl;
//         cout<<"Hello Babbar"<<endl;
//     }
//     void operator() (){
//         cout<<"Main Bracket hu "<<this->a<<endl;
//     }
// };
// class Animal{
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog : public Animal{
//     public:
//     void speak(){
//         cout<<"Barking"<<endl;
//     }
// };


int main(){
    //1.
    // Student first;
    // cout<<"Sab shi chal rha hai "<<first.getAge()<<endl;

    //2.
    // Male m1;
    // cout<<m1.height<<endl;
    // Male object;
    // cout<<object.age<<endl;
    // cout<<object.weight<<endl;
    // cout<<object.height<<endl;
    // cout<<object.color<<endl;
    // object.setWeight(84);
    // cout<<object.weight<<endl;
    // object.sleep();

    // //3.
    // Dog d;
    // d.speak();
    // cout<<d.age<<endl;
    ////4.
    // GermanShepherd g;
    // g.speak();

    // //5
    // Hybrid obj;
    // obj.speak();
    // obj.bark();

    // //6
    // A object1;
    // object1.func1();
    // B object2;
    // object2.func1();
    // object2.func2();
    // C object3;
    // object3.func1();
    // object3.func3();

    // //7
    // C obj;
    // // obj.func(); //error
    // obj.A::func();
    // obj.B::func();

    //8
    // Dog obj;
    // obj.speak();
    // B obj1,obj2;
    // obj1.a=4;
    // obj2.a=7;
    // obj1+obj2;
    // obj1();
    // A obj;
    // obj.sayHello();

    return 0;
}
