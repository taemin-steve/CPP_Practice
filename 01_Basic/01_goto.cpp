#include <iostream>

using namespace std;

int main(){
    go:

    cout << 1 << endl;

    goto go; // 해당 키워드로 점프하게 됨 스파게티 코드가 될 위험이 있으니 사용하는 것을 지양
}