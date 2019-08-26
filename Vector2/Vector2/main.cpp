#include "Vector.hpp"
#include <iostream>


int main(void)
{
	Vector2 vector1{ 0, 0 }, vector2{ 1, 1 }, vector3{ 4, 3 };
	std::cout << "ベクトルの長さ:" << vector1.Length() << std::endl;
	std::cout << "ベクトルの長さ:" << vector2.Length() << std::endl;
	std::cout << "ベクトルの長さ:" << vector3.Length() << std::endl;

	vector1 += vector2;  //0,0 + 1,1
	std::cout << "Vector + Vector結果:" << vector1 << std::endl;
	vector2 *= 2;
	std::cout << "Vector * Scalar結果:" << vector2 << std::endl;
	vector1 -= vector2;  //1,1 - 1,1
	std::cout << "Vector - Vector結果:" << vector1 << std::endl;

	std::cout << "ベクトル正規化 :" << Normalize(vector1) << std::endl;
	std::cout << "ベクトル正規化 :" << Normalize(vector2) << std::endl;
	std::cout << "ベクトル正規化 :" << Normalize(vector3) << std::endl;

	system("pause");
	return 0;
}