//5. �������� �������� � ������ 4, ��� ��������� ��������� ��������.

int main() {
    int* ptra = new int; // �������� ���'�� ��� �������������� ��������
    *ptra = 42; // ��������� ��������
    delete ptra; // ��������� ���'��
    ptra = nullptr;//�� �������� �������� ���� ��������� ���'��, ��� ����� ��������� ���������� ���������.


    return 0;
}
