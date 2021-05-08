#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
   int real,imag;
   public:
   Complex(){
       real=0;
       imag=0;
   }
   Complex(int i, int j){
       real=i;
       imag=j;
   }
   void print(){
       cout<<real<<"+"<<imag<<"i"<<endl;
   }
   //Using operator overloading syntax:
   Complex operator +(Complex c){
       Complex temp;
       temp.real=real+c.real;
       temp.imag=imag+c.imag;
       return temp;
   }
};
int main(){
   Complex c1(10,10);
   Complex c2(10,10);
   Complex c3(5,5);
   Complex c4;
   c4=c1+c2+c3;
   c4.print();

    return 0;
}
