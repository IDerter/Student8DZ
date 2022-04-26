#include "Student.h"
std::ostream& operator<<(std::ostream& os, const Student& student) //возвращает ссылку на объект типа ostream
{
    os << student.age << '/' << student.nummarks << '/' << student.name;
    return os;
}
std::istream& operator>> (std::istream& in, Student& student) //возвращает ссылку на объект типа ostream
{
    in >> student.age;
    in >> student.nummarks;
    in >> student.name;
    return in;
}

int main()
{
    Student student(18,5,"Daniil");
    
    std::cout << student << std::endl;
    std::cin >> student;
    std::cout << student<<std::endl;
    setlocale(LC_ALL, "rus");
    //student.SetNummarks(5);
    float* mas = new float[student.GetNummarks()]; //указатель на массив который хранит оценки студента
    student.SetMarks(mas, student.GetNummarks());
    std::cout<<std::endl<<"Средняя оценка студента: "<<student.ArifmMarks(mas, student.GetNummarks())<<std::endl;
    Student student1(20, 7, "Nikita");
    student = student1; //перегруженный оператор присваивания 
    std::cout << student<<std::endl;
    delete[] mas;
}
