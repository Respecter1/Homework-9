/*
	8. Жучки: що неправильно у цій програмі?
	віповідь:
				Функція Cat& MakeCat(int age) у цьому коді являється зайвою та неефективною. 
				1) вона призводить до витоку пам'яті, 
				оскільки виділяє пам'ять для об'єкта Cat, але не звільняє її після виходу з функції.
				Це може призвести до проблем з витоком пам'яті в програмі. 
				2) використання & у сигнатурі функції вказує на те,
				що функція повертає посилання на об'єкт, але у цьому випадку воно зайве,
				оскільки не здійснюється маніпуляція з об'єктом у пам'яті.
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
//    int GetAge() const { return itsAge != nullptr ? *itsAge : -1; } // Перевірка на нульовий вказівник перед отриманням віку
//
//private:
//    int* itsAge = nullptr; // Встановлення вказівника на нуль
//};
//
//Cat* MakeCat(int age); // Зміна повертає вказівник на Cat, а не посилання
//
//int main()
//{
//    int age = 7;
//    Cat* Boots = MakeCat(age); // Отримання вказівника
//    cout << "Boots is: " << Boots->GetAge() << " years old" << endl; // Використання оператора ->
//    delete Boots; // Видалення об'єкта
//    return 0;
//}
//
//Cat* MakeCat(int age)
//{
//    return new Cat(age); // Повернення вказівника на новий об'єкт Cat
//}
