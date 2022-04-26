#include "Student.h"
void Student::SetAge(int valueage)
{
	age = valueage;
}
int Student::GetAge()
{
	return age;
}

int Student::GetNummarks()
{
	return nummarks;
}
void Student::SetNummarks(int valueage)
{
	nummarks = valueage;
}
std::string Student::GetName()
{
	return name;
}
void Student::SetName(std::string valuename)
{
	name = valuename;
}
void Student::SetMarks(float* mas, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		mas[i] = 2+(float)(rand()) / RAND_MAX * 3;
		std::cout << mas[i] << " ";
	}
}
float Student::ArifmMarks(float* mas, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += mas[i];
	}
	arifmmarks = (sum / GetNummarks());
	return arifmmarks;
}
