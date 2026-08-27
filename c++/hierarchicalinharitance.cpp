#include<iostream>
using namespace std;
class a{
    public:
    void fuc1(){
        cout<<"inside fuction 1"<<endl;
    }

};
class b:public a{
    public:
    void fuc2(){
        cout<<"inside fuction 2"<<endl;
    }

};
class c :public a{
    public:
    void fuc3(){
        cout<<"inside fuction 3"<<endl;

    }

};
int main(){
    a obj1;
    obj1.fuc1();
    
    b obj2;
    obj2.fuc1();
    obj2.fuc2();

    c obj3;
    obj3.fuc1();
    obj3.fuc3();

    return 0;



}