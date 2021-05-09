#include<bits/stdc++.h>
using namespace std;

class Box{
    private:
    double length;
    double breadth;
    double height;
    public:
double getvolume(void){
 return length*breadth*height;
}
void setlength(double len){
     length=len;
}
void setbreadth(double bre){
     breadth=bre;
}
void setheight(double high){
     height=high;
}
// operator overloading usin binary operator
Box operator +(const Box &B){
     Box box;
     box.length=this->length+B.length;
     box.breadth=this->breadth+B.breadth;
     box.height=this->height+B.height;
     return box;
}
};
int main(){
 Box Box1;
 Box Box2;
 Box Box3;
 double volume=0.0;

//For box 1
Box1.setlength(45.0);
Box1.setbreadth(13.0);
Box1.setheight(10.0);

//for box 2

Box2.setlength(10);
Box2.setbreadth(20);
Box2.setheight(30);

//volume of Box 1
volume=Box1.getvolume();
cout<<"volume of Box 1 is ="<<volume<<endl;

//volume of Box 2
volume=Box2.getvolume();
cout<<"volume of box 2 is ="<<volume<<endl;

//to find the total volume of both boxes:

Box3=Box1+Box2;
volume=Box3.getvolume();
cout<<"volume of box 3 is ="<<volume<<endl;


}