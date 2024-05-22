/*
	9. Виправте програму із вправи 8.
	
	Відповідь:
				- замість функції Cat &MakeCat(int age)
				я доповнив конструктор та деструктор функціоналом 
				які замінили цю функцію і вирішили питання
				з витіком пам'яті
*/

#include <iostream>

using namespace std;

class Cat
{
public:
	Cat(int *age);
	~Cat();

	int GetAge() const { return *itsAge; }
	
private:
	int* itsAge;
};


int main()
{
	int age = 7;
	Cat Boots (&age);
	cout << "Boots is: " << Boots.GetAge() << " years old" << endl;
	return 0;
}

Cat::Cat(int* age)
{
	itsAge = new int(* age);
}
Cat::~Cat()
{
	delete itsAge;
}


