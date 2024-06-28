#pragma once

template<typename T1, typename T2>
class Pair
{
private:
	T1 first;
	T2 second;
public:
	Pair(const T1& x, const T2& y)
	{
		this->first = x;
		this->second = y;
	}

	T1 getfirst() { return first};
	T2 getsecond() { return second};
	void setWeight(T1 first) { this->first = first};
	void setAge(T2 second) { this->second = second};

	void informationoutput()
	{
		cout << "first: " << this->first << endl;
		cout << "second: " << this->second << endl;
	}

};

