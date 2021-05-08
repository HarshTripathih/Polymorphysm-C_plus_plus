#include<bits/stdc++.h>
using namespace std;

class A{
public:
    void addition(){
        // cout<<"A+B="<<a+b<<endl;
        cout<<"A class called"<<endl;
    }


};
class B: public A{
     public:
void addition(){
     //cout<<"A+B+C="<<a+b+c<<endl;
      cout<<"B class called"<<endl;
}
};
int main(){

B obj = B();
obj.addition();

return 0;

}
