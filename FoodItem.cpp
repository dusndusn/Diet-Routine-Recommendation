//���� �̸��� Į�θ�

#include<iostream>


class FoodItem
{
private:
	std::string name;
	int calories;
public:
	FoodItem(std::string& name, int calories) : name(name), calories(calories) {}
	std::string getName() const
	{
		return name;
	}
	int getCalories() const
	{
		return calories;
	}
};