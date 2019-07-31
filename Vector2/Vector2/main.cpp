#include "Vector.hpp"
#include <iostream>

int main(void)
{
	
    constexpr Vector2 vector1{ 0, 0 }, vector2{ 1, 1 }, vector3{ 4, 3 };
	std::cout << "�x�N�g���̒���:" << vector1.Length() << std::endl;
	std::cout << "�x�N�g���̒���:" << vector2.Length() << std::endl;
	std::cout << "�x�N�g���̒���:" << vector3.Length() << std::endl;
	auto sum = vector3 + vector2;
	std::cout << "����������:" << sum << std::endl;
	std::cout << "�x�N�g�����K�� :" << Normalize(vector1) << std::endl;
	std::cout << "�x�N�g�����K�� :" << Normalize(vector2) << std::endl;
	std::cout << "�x�N�g�����K�� :" << Normalize(vector3) << std::endl;
	system("pause");
	return 0;
}