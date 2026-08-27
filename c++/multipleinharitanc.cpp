#include<iostream>
using namespace std;
    class animal{
        public:
        int age;
        int weight;


        public:
        void bark(){
            cout<<"Barking"<<endl;

        }
};
class humans{
    public:
    string colour;

    public:
    void speak(){
        cout<<"speaking"<<endl;

    }

};
//multiple inharitance
class hybrid:public animal,public humans {



};  

int main(){
    hybrid h1;
    h1.speak();
    h1.bark();


}