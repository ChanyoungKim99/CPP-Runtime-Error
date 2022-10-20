#include <iostream>

double Divide(double a, double b)
{
	// Callee Side
	return a / b;
}

int main()
{
	double x;
	double y;

	std::cin >> x >> y;

	// Caller Side
	std::cout << Divide(x, y) << std::endl;

	return 0;
}

// 컴파일, 빌드 모두 잘되는데?

// b가 0이라면?
// inf(infinite)가 나온다.

// 10 / 5 = 2
// 10 / 2 = 5
// 10 / 1 = 10
// 10 / 0.5 = 20
// 10 / 0 = inf

// 예전 윈도우에서는 위와 같이 실행 시, 프로그램이 아예 죽었다.
// Divide by Zero 라고 한다.
// 컴퓨터에게 0으로 나누는 것은 금지해야 한다!!

// 프로그램이 실행될 때 발생하는 Runtime-Error 이다.
// 우리는 이것을 미연에 방지하기 위해
// 미리 "예외 처리"를 할 필요가 있다.

// 예외 처리(방어 코드)를 잘 대비해놓는 것이 
// 좋은 프로그래머의 자질이다.
