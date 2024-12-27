#include<iostream>
using namespace std;
class tp{
    protected:
    void lp(){
        cout<<" Hello World ! "<<endl;
    }
};
class derived:public tp{
    public:
    void getlp(){
        lp();
    }
};
int main(){
    derived obj;
    obj.getlp();
    return 0;
}