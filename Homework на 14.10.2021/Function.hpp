#pragma once
#include <math.h>
#include <iostream>

namespace VK
{ 

	void Read(int& n, int& m, int mas[100][100]); // ���������(�������) ����� ��������� � �������

	void Write(int n, int m, int mas[100][100]); // ������� ������ ��������� �������

	int MinNumber(int n, int m, int mas[100][100]); // ����� ������������ �������� � �������

	bool EqualMin(int n, int m, int mas[100][100]); // ����� ��������� ������ ������������ ��������

	bool PrimeNumber(int n, int m, int mas[100][100]); // ����� ���� ���������, ���������� �������� ������� - ������� �����

	void SWAP(int& a, int& b); // ������� ������������ ��������� � �������

	void SortMas(int& n, int& m, int mas[100][100]); // ������� ���������� ��������� � ������� �������
}



