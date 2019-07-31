#include <cmath>
#include <iostream>
#include <type_traits>

template<typename T>
struct Vector2
{
	T x{};
	T y{};
	constexpr Vector2() = default;  //デフォルトコンストラクタ
	constexpr Vector2(T x, T y) :x(x), y(y) {}
	/*constexpr */double Length()const  
	{ 
		return sqrt(x * x + y * y);
	}

	/*constexpr */void Normalize()
	{
		auto len = this->Length();
		if (len == 0)
		{
			this->x = 0;
			this->y = 0;
		}
		else
		{
			this->x /= len;
			this->y /= len;
		}
	}
};


template<typename T>
Vector2<T> operator+(const Vector2<T>& vector1, const Vector2<T>& vector2)
{
	return Vector2{ vector1.x + vector2.x,vector1.y + vector2.y };
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector2<T>& vec)
{
	os << vec.x << "," << vec.y;
	return os;
}

template<typename U = double, typename T>
/*constexpr */Vector2<U> Normalize(const Vector2<T> &vec)
{
	auto len = vec.Length();
	if (len == 0)
	{
		return Vector2<U>{static_cast<U>(0),
						  static_cast<U>(0)};
	}
	else
	{
		return Vector2<U>{static_cast<U>(vec.x / len),
						  static_cast<U>(vec.y / len)};
	}
}

