/*
	3. —комп≥люйте програму, написану у вправ≥ 2.
	як≥ д≥њ комп≥л€тор вважаЇ помилковими? як≥ р€дки генерують попередженн€?
*/

int main()
{

	int const* pfantom;
	int varOne;
	*pfantom = &varOne;//11 '=': неможливо перетворити з 'int *' на 'const int' 
	varOne = 6;
	*pfantom = 7;//13 'pfantom': ви не можете призначити зм≥нн≥й, €ка Ї const
	int varTwo;
	*pfantom = varTwo;//15 'pfantom': ви не можете призначити зм≥нн≥й, €ка Ї константою 

}