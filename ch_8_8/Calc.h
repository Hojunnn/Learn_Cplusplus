#pragma once

#include <iostream>
// ��� ���ο����� using namespace�� class ����
//Ŭ���� ������ ��� �Լ��� ���Ǹ� ���� ��� ���α׷����س��� ���, inlining�ϰ� �ʹٴ� �ǻ�� ����
//��� ������ Ŭ������ ����θ� ���ܵ�
class Calc
{
private:
	int _value;

public:
	Calc(int init_value);

	Calc& add(int value);// ����θ� ���ܵ�
	Calc& sub(int value);
	Calc& mult(int value);
	void print();
};

