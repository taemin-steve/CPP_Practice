#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 5> arr{1,2,3};
    array<int, 5> arr2{1,2,3};

    cout << arr.size() << endl;
    cout << arr.at(2) << endl;

    if(arr == arr2){
        cout << "모두 같음" << endl;
    }
    
}
