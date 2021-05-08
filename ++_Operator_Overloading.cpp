#include<bits/stdc++.h>
using namespace std;

class Increament{
    private:
    int inc;
    public:
    Increament(): inc(5){}
    Increament(int n){
      inc=n;
    }
    void print(){

        cout<<"the increament of no is "<<inc<<endl;
    }
    //++ operator overloading use as a Prefix :
    Increament operator ++(){
        Increament temp;
        temp.inc = ++inc;
        return temp;
    }
    // ++ operator overloading use as a postfix:
    Increament operator ++(int){

        Increament temp;
        temp.inc=inc++;
        return temp;
    }


};
int main(){
Increament inc ,result;
result = ++inc;//calling of ++operator used as a Prefix
result.print();

result = inc++;
result.print();
return 0;
}