#include<bits/stdc++.h>
using namespace std;

class calculator{

        private:
        int Division,subtraction,imag,im;
        public:
        calculator(){
             subtraction=0;
             imag=0;
             
         }

         calculator(int z,int n){
             subtraction=z;
             imag=n;
             
         }
         void print2(){
             cout<<subtraction<<"-"<<imag<<"i"<<endl;
         }
     //operator overloading :
     calculator operator -(calculator B){
         calculator temp;
         temp.subtraction=subtraction-B.subtraction;
         temp.imag=imag-B.imag;
         return temp;
     }
};
int main(){

calculator B1(12,12);
calculator B2(3,3);

calculator B3;
B3=B1-B2;
B3.print2();
return 0;



}