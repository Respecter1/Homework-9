/*
	8. �����: �� ����������� � ��� �������?
	������:
				������� Cat& MakeCat(int age) � ����� ��� ��������� ������ �� ������������. 
				1) ���� ���������� �� ������ ���'��, 
				������� ������ ���'��� ��� ��'���� Cat, ��� �� ������� �� ���� ������ � �������.
				�� ���� ��������� �� ������� � ������� ���'�� � �������. 
				2) ������������ & � �������� ������� ����� �� ��,
				�� ������� ������� ��������� �� ��'���, ��� � ����� ������� ���� �����,
				������� �� ����������� ���������� � ��'����� � ���'��.
*/





#include <iostream>

using namespace std;

class Cat
{
public:
	Cat(int age) { itsAge = age; }
	~Cat() {}
	int GetAge() const { return itsAge; }

private:
	int itsAge;
};

Cat& MakeCat(int age);

int main()
{
	int age = 7;
	Cat Boots = MakeCat(age);
	cout << "Boots is: " << Boots.GetAge() << " years old" << endl;
	return 0;
}

Cat& MakeCat(int age)
{
	Cat* pCat = new Cat(age);
	return *pCat;
}





































//#include <iostream>
//
//using namespace std;
//
//class Cat
//{
//public:
//    Cat(int age) { itsAge = new int(age); }
//    ~Cat() { delete itsAge; }
//    int GetAge() const { return itsAge != nullptr ? *itsAge : -1; } // �������� �� �������� �������� ����� ���������� ���
//
//private:
//    int* itsAge = nullptr; // ������������ ��������� �� ����
//};
//
//Cat* MakeCat(int age); // ���� ������� �������� �� Cat, � �� ���������
//
//int main()
//{
//    int age = 7;
//    Cat* Boots = MakeCat(age); // ��������� ���������
//    cout << "Boots is: " << Boots->GetAge() << " years old" << endl; // ������������ ��������� ->
//    delete Boots; // ��������� ��'����
//    return 0;
//}
//
//Cat* MakeCat(int age)
//{
//    return new Cat(age); // ���������� ��������� �� ����� ��'��� Cat
//}
