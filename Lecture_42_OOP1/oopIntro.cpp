#include<iostream>
#include<string.h>
#include<string>
#include<cstring>
using namespace std;

class Hero{
    private:
        int health;
    public:
        char level;
        char *name;
        static int timeToComplete;
        void print(){
            cout << "Name -> " << this->name << endl;
            cout << "Level -> " << this->level << endl;
            cout << "Health -> " << this->health << endl;
            cout << "-------- " << endl;
        }
        // Default Constructor
        Hero(){
            cout << "Default Constructor Called" << endl;
            char *name = new char[100];
        }

        // Paramaterized Constructor
        // this -> pointer to current object
        Hero(int health){
            this->health = health;
        }

        Hero(int health, char level){
            this->health = health;
            this->level = level;
        }

        Hero(Hero& temp){
            cout << "Custom copy constructor called " << endl;
            // char *temp = new char[strlen(temp.name) + 1];
            // strcpy(temp,temp.name);
            this->health = temp.health;
            this->level = temp.level;
        }

        int getHealth(){
            return health;
        }
        char getLevel(){
            return level;
        }

        void setHealth(int  h){
            health = h;
        }
        void setLevel(char l){
            level = l;
        }

        void setName(char name[]){
            this->name = name;
        }

        static int random(){
            return timeToComplete;
        }

        ~Hero(){
            cout << "Default destructor called " << endl;
        }
};

int Hero::timeToComplete = 5;

int main(){

    cout << "Time to Complete -> " << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero h1;

    // Hero *h2 = new Hero;

    // delete h2;

    // Hero h1;
    // h1.setHealth(70);
    // h1.setLevel('D');
    // char name[10] = "Asad";
    // h1.setName(name);

    // h1.print();

    // Hero h2(h1);

    // h2.print();

    // h2.name[0] = 'B';
    // h2.print();
    // h1.print();

    // Hero h2;
    // h2 = h1;
    // h1.print();
    // h2.print();

    // Hero h1(70,'D');
    // h1.print();

    // Copy Constructor
    // Hero h2(h1);
    // h2.level = h1.level;
    // h2.health = h1.health;
    // h2.print();
    


    // Hero h1(50);
    
    // Hero h2(60,'D');

    // cout << h1.getHealth() << endl;
    // cout << h1.getLevel() << endl;


    // Hero *h3 = new Hero(10);
    // h3->print();

    // h2.print();



    // Hero h1;


    // Hero h1;
    // Hero *h2 = new Hero;
    // Hero *h3 = new Hero();


    // Static Allocation
    // Hero h1;
    // h1.setHealth(50);
    // h1.setLevel('D');

    // cout << "Level is " << h1.getLevel() << endl;
    // cout << "Health is " << h1.getHealth() << endl;

    // // Dynamic Allocation

    // Hero *h2 = new Hero;

    // h2->setHealth(90);
    // h2->setLevel('E');

    // cout << "Health is " <<  (*h2).getHealth() << endl;
    // cout << "Level is " << (*h2).getLevel() << endl;

    // cout << "Health is " <<  h2->getHealth() << endl;
    // cout << "Level is " << h2->getLevel() << endl;

    
 
    // Hero h1;

    // cout << "Size of h1 : " << sizeof(h1) << endl;

    //  h1.setHealth(70) ;
    //  h1.setLevel('D');

    //  cout << h1.level << endl;

    //  cout << h1.getHealth() << endl;
    //  cout << h1.getLevel() << endl;


}