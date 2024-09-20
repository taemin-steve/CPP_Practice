#include <iostream>

using namespace std;

int main(){
    int nums[3] = {1,2,3};

    for (int& num : nums){ // 향상된 for문. 레퍼런스타입을 활용해서 바로 값으로 받아온다.
        cout << num << endl;
    }

    // 다차원 배열에서는 메모리 구조를 고려해서 출력을 해줘야 케시를 활용할수 있음 
    
}