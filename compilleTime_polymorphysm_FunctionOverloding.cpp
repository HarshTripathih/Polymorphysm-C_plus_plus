#include<bits/stdc++.h>
using namespace std;

class Maths{

       public:
       void num(int x){
           cout<<"the number is X ="<<x<<endl;
       }
       void num(double x){
           cout<<"the number is X="<<x<<endl;
       }
       void num(int x , int y){
           cout<<"the number X is="<<x<<","<<"the number Y is="<<y<<endl;
       }
};
int main(){
    Maths obj;
    obj.num(12);
    obj.num(8.74);
    obj.num(45,65);

}
