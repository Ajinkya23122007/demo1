#include<iostream>
using namespace std;
class humans{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this->age;

    }
    void setweight(int w){
        this->weight=w;
    }
};
class male:public humans{
    public:
    string colour;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }

};
int main(){
    male m1;
    cout<<m1.age<<endl;
    cout<<m1.height<<endl;
    m1.sleep( );
    m1.setweight(78);
    cout<<m1.weight<<endl;

    return 0;


}