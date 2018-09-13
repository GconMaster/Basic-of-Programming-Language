// 생성자: 객체가 생성될 떄 자동으로 호출되는 함수
// 소멸자: 객체가 생성될 떄 자동으로 호출되는 함수

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // 생성자
		cout << "생성자가 호출되었다!!" << endl;
	}

	~MyClass(){ // 소멸자
		cout << "소멸자가 호출되었다!!" << endl;
	}
};

//MyClass globalObj;

void testLocalObj() {
	cout << "testLocalObj함수 시작!!" << endl;
	MyClass loaclObj;
	cout << "testLocalObj함수 끝!!" << endl;
}

int main() {
	cout << "main함수 시작!!" << endl;
	testLocalObj();
	cout << "main함수 끝" << endl;
}

