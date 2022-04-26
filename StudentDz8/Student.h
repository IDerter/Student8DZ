#pragma once
#include <iostream>

class Student
{
private:
	int age;
	int nummarks;
	std::string name;
	float arifmmarks;
public:
	int GetAge();
	void SetAge(int valueage);
	int GetNummarks();
	void SetNummarks(int valueage);
	std::string GetName();
	void SetName(std::string valueaname);
	float ArifmMarks(float* yspev, int nummark);
	void SetMarks(float* yspev, int nummarks);

	Student(int age1 = 18, int nummarks1 = 5, std::string name1 ="Ivan")//, float srmark = 4)
	{
		age = age1;
		nummarks = nummarks1;
		name = name1;
		//arifmmarks = srmark;
	}
	Student& operator = (const Student& stud)
	{
		// Проверка на самоприсваивание
		if (this == &stud)
			return *this;

		// Выполняем копирование значений
		age = stud.age;
		nummarks= stud.nummarks;
		name = stud.name;
		//arifmmarks = stud.arifmmarks;
		return *this; // Возвращаем текущий объект
	}
	friend std::ostream& operator <<(std::ostream& os, const Student& student);
	friend std::istream& operator >>(std::istream& os, Student& student);
	

};