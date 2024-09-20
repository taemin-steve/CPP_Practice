#include <iostream>
#include <string>

using namespace std;

int main(){

    struct Person{ // 구조체 내부에 구조체를 선언하는 방법도 가능. 단 우전적으로 먼저 선언한 경우에만 가능
        string name;
        int age;
    }; // 구조체의 경우 가장큰 타입의 자료형의 배수로 값이 들어가게 된다. 순서를 잘 맞춰주지 않으면 바이트 패딩이 발생.

    Person p = {.name = "Steve", .age=29};

    cout << p.name << endl;
    //Person p;

    p.name = "정태민";
    p.age = 28;

    cout << p.name << endl;

    Person p1 = p;
    p.name = "chris";

    cout << p1.name << endl; // 메모리 전체 복사가 발생한다. 딥 카피가 발생. 포인터 타입이 있는경우에는 조금 변경될 수 있음
}