/*
	4. �������� ��������, ��� ������� ��������� ��������.
*/

int main() {
    int* ptra = new int; // �������� ���'�� ��� �������������� ��������
    *ptra = 42; // ��������� ��������
    delete ptra; // ��������� ���'��
    //ϳ��� ������� `delete`, `ptra` ��� ���������, ������� ���������� ������������.
    // �����, ���� ��� �� �� �������� ���'��, ��� �� ���'��� ��� �� �������� �������.
  

    return 0;
}
