#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;


    public:
    void speak(){
        cout<<"meowwwwww"<<endl;

    }

};
class cat:public animal{
    public:
    void bite(){
        cout<<"grrrrr"<<endl;
    }

};
class parsion:public cat{


};

int main(){
    parsion p1;
    p1.speak();
    p1.bite();

    return 0;

}