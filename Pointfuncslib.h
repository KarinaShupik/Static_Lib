#pragma once
#include<iostream>
#include<string>

//������ �����

//202��

/*�������� ���� Point ��� ������ �� ������� �� ������.���������� ����� �
��������.����'������ ������ ���� ���������: ���������� ����� �� �� X,
���������� �� �� Y, ���������� ������ �� ������� ���������, ������ ��
����� �������, ������������ � ������ ����������, ��������� �� ��� �
���������.*/

class Point
{
public:
	int x, y;
	int x1, y1;
	Point Init(int x, int y);
	Point Read();
	void Display();
	char toString();

	//������������
	Point();
	Point(float valueX, float valueY);

	//�������������� �������� ���������, ���������� �� ����������

	//���������� ���������
	Point& operator++ ();

	//���������� ���������
	Point& operator-- ();

	//�������
	bool operator== (const Point& other);

	//���������
	bool operator!= (const Point& other);

private:
	float distanceToStartCoordinate();
	float polarCoordinates();
	float transferX();
	float transferY();
};
