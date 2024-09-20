#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int main()
{
    /**** C Style의 문자 *******************/
    char str[] = "abc";

    str[3] = '0';
    cout << str << endl;
    
    str[3] = '\0'; // 문자열 뒤에는 항상 널문자가 저장되어 있음
    cout << str << endl;

    /*******************************/

    char str1[] = "Hello";
    char str2[] = "Hello";

    int result = strcmp(str1, str2); // strcmp 를 통해서 같으면 0을 반환
    cout << result << endl;

    /************************/

    char str3[] = "1.1";
    float result2 = atof(str3);

    cout << result2 << endl;

    /* cpp 스타일의 string */

    string str4("abc"); 
    string str5("abc");

    str4 += str5; // 바로 문자열 간의 합도 사용 가능

    cout << str4 << endl;

    cin >> str4;
    cout << str4 << endl;
    
}