#include <iostream>
#include <string.h>
using namespace std;

/*

1.Class : A user defined datatype
2.Empty class : It's objects have a size of 1 byte.Size depends on the no. of variables present in the class.
3.By default everything is private in a class.
4.Learn padding,greedy alignment,initialisation list
5.After defining any type of constructor ,particular type of deafult constructor died. 
6.Deafult constructor : No return type,no input parameter.
7.'this' keyword is a pointer to current object.
8.Default copy constructor -> Shallow copy (Change in 1 object will be reflected in other object)
9.Destructor : de-allocate memory.Automatically called in static allocation of objects,but need to be manually called in dynamic allocation.
10.Static functions don't use 'this' keyword.


*/

class Hero{
    private:
        int health;

    public:
        char *name;
        char level;
        static int timeToComplete;
        
    Hero(){
        cout<<"Simple constructor called"<<endl;
        name=new char[100];
    }
    //Parameterised constructor
    Hero(int health){
        this->health=health;
    }
    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    //Copy constructor
    Hero(Hero &temp){   //'&' avoids the infinite loop between Hero and temp.
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);   //deep copy
        this->name=ch;
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"[Name: "<<this->name<<",";
        cout<<"health: "<<this->health<<",";
        cout<<"level: "<<this->level<<"]";
        cout<<endl<<endl;
    }
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    static int random(){   //Can only access static members of class.
        return timeToComplete;
    }

    //Destructor
    ~Hero(){
        cout<<"Destructor bhai called"<<endl;
    }

         
};

int Hero:: timeToComplete=5;   //Initialise static variable. 

int main(){
    /*
    //Creation of object
    Hero ramesh;
    cout<<"Size of Ramesh is "<<sizeof(ramesh)<<endl;
    cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
    ramesh.setHealth(70);
    ramesh.level='A';
    cout<<"Health is: "<<ramesh.getHealth()<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;
    */

   /*
   //Static Allocation
   Hero a;
   a.setHealth(80);
   a.setLevel('B');
   cout<<"Level is "<<a.level<<endl;
   cout<<"Health is "<<a.getHealth()<<endl;

   //Dynamic Allocation  : Heap memory is used.
   Hero *b = new Hero;
   b->setLevel('A');  //b is address
   b->setHealth(70);
   cout<<"Level is "<<(*b).level<<endl;
   cout<<"Health is "<<(*b).getHealth()<<endl;
   //or
   cout<<"level is "<<b->level<<endl;
   cout<<"Health is "<<b->getHealth()<<endl;
    */


   /*
   Hero ramesh(10);  //statically
   cout<<"address of ramesh "<<&ramesh<<endl;
   ramesh.print();
   
   Hero *h = new Hero(11);   //dynamically
   h->print();

   Hero temp(22,'B');
   temp.print();
   */

  /*
  Hero hero1;
  hero1.setHealth(12);
  hero1.setLevel('D');
  char name[7]="Babbar";
  hero1.setName(name);
  hero1.print();

  Hero hero2(hero1);    //use default copy constructor
  hero2.print();
  //or
  //Hero hero2=hero1;
  
  hero1.name[0]='G';
  hero1.print();
  hero2.print();
  hero1=hero2;
  hero1.print();
  hero2.print();
  */

/*
//Static
Hero a;
//Dynamic
Hero *b = new Hero();
delete b;   //manually destructor call
*/

/*
cout<<Hero::timeToComplete<<endl;
cout<<Hero::random()<<endl;
Hero a;
cout<<a.timeToComplete<<endl;
Hero b;
b.timeToComplete=10;
cout<<a.timeToComplete<<endl;
cout<<b.timeToComplete<<endl;
*/
    return 0;
}