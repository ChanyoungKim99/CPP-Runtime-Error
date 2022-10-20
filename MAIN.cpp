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

// ������, ���� ��� �ߵǴµ�?

// b�� 0�̶��?
// inf(infinite)�� ���´�.

// 10 / 5 = 2
// 10 / 2 = 5
// 10 / 1 = 10
// 10 / 0.5 = 20
// 10 / 0 = inf

// ���� �����쿡���� ���� ���� ���� ��, ���α׷��� �ƿ� �׾���.
// Divide by Zero ��� �Ѵ�.
// ��ǻ�Ϳ��� 0���� ������ ���� �����ؾ� �Ѵ�!!

// ���α׷��� ����� �� �߻��ϴ� Runtime-Error �̴�.
// �츮�� �̰��� �̿��� �����ϱ� ����
// �̸� "���� ó��"�� �� �ʿ䰡 �ִ�.

// ���� ó��(��� �ڵ�)�� �� ����س��� ���� 
// ���� ���α׷����� �����̴�.
