/*
	3. ���������� ��������, �������� � ����� 2.
	�� 䳿 ��������� ����� �����������? �� ����� ��������� ������������?
*/

int main()
{

	int const* pfantom;
	int varOne;
	*pfantom = &varOne;//11 '=': ��������� ����������� � 'int *' �� 'const int' 
	varOne = 6;
	*pfantom = 7;//13 'pfantom': �� �� ������ ���������� �����, ��� � const
	int varTwo;
	*pfantom = varTwo;//15 'pfantom': �� �� ������ ���������� �����, ��� � ���������� 

}