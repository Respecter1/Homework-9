/*
	2. Напишіть програму, яка оголошує константний вказівник на постійне ціле значення. 
	Ініціалізуйте цей вказівник, щоб він вказав на цілісну змінну varOne. 
	Надайте змінній varOne значення 6. 
	Використовуйте вказівник, щоб, присвоїти змінній varOne значення 7. 	
	Створіть другу цілочисленну змінну varTwo. 
	Перепризначте вказівник, щоб він вказував на змінну varTwo.
	Поки не компілюйте цю вправу.
*/

int main()
{
	
	int *const pfantom;//виправив
	int varOne;

	*pfantom = &varOne;

	varOne = 6;

	*pfantom = 7;

	int varTwo;

	*pfantom = varTwo;
	
	return 0;
}
