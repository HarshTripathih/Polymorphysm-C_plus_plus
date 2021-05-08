
#include <bits/stdc++.h>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}


    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }


    // Overload ++ when used as postfix
    void operator ++ (int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count value,inc;

    // Call the "void operator ++ (int)" function
    value++;
    inc.display();

    // Call the "void operator ++ ()" function
    ++value;

    inc.display();
    return 0;
}
