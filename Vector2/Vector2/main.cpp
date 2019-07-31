#include "Vector.hpp"
#include <iostream>

int main(void)
{
	
    constexpr Vector2 vector1{ 0, 0 }, vector2{ 1, 1 }, vector3{ 4, 3 };
	std::cout << "ベクトルの長さ:" << vector1.Length() << std::endl;
	std::cout << "ベクトルの長さ:" << vector2.Length() << std::endl;
	std::cout << "ベクトルの長さ:" << vector3.Length() << std::endl;
	auto sum = vector3 + vector2;
	std::cout << "足した結果:" << sum << std::endl;
	std::cout << "ベクトル正規化 :" << Normalize(vector1) << std::endl;
	std::cout << "ベクトル正規化 :" << Normalize(vector2) << std::endl;
	std::cout << "ベクトル正規化 :" << Normalize(vector3) << std::endl;
	system("pause");
	return 0;
}