/*
	9. �������� �������� �� ������ 8.
	
	³������:
				- ������ ������� Cat &MakeCat(int age)
				� �������� ����������� �� ���������� ������������ 
				�� ������� �� ������� � ������� �������
				� ������ ���'��
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


