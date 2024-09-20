#include <iostream>
#include <string>

using namespace std;

int main(){

    union ID
    {
        /* data */
        int i;
        char str[];
        double d;
    };

    ID i;

    cout << sizeof(i) << endl; // 가장 큰 바이트가 나온다.

    struct Product
    {
        int type;
        ID id;
    };

    Product p = { 0, {1111}};
    //Product p = { 0, {.str = "111"}};
    
}