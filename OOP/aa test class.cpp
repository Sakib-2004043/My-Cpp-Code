#include  <iostream>
class Student {
public:
std::string id;
    int age;
    int level;
    int term;
    Student() {}
    Student(std::string id, int age, int level, int term)
    {
        this->id = id;
        this->age = age;
        this->level = level;
        this->term = term;
    }
};
class Course_Student
{
public:
Student student;
    int test1;
    int test2;
    int test3;
    int test4;
    Course_Student()   {
        student = Student();
    }
Course_Student(std::string id, int age, int level, int term, int t1, int t2, int t3, int t4)
   {

student = Student(id, age, level, term);
        test1 = t1;
        test2 = t2;
        test3 = t3;
        test4 = t4;
    }

    int best_3()

    {
        int tests[] = {test1, test2, test3, test4};

        if (tests[0] > tests[1])

        {
            int temp = tests[0];
            tests[0] = tests[1];
            tests[1] = temp;
        }

        if (tests[1] > tests[2])

        {
            int temp = tests[1];
            tests[1] = tests[2];
            tests[2] = temp;
        }

        if (tests[0] > tests[1])

        {
            int temp = tests[0];
            tests[0] = tests[1];
            tests[1] = temp;
        }

        return tests[1] + tests[2] + tests[3];
    }

    void print_basic()

    {
        std::cout << "ID: " << student.id << '\n';
        std::cout << "AGE: " << student.age << '\n';
        std::cout << "LEVEL: " << student.level << '\n';
        std::cout << "TERM: " << student.term << '\n';

        std::cout << "test1: " << test1 << '\n';
        std::cout << "test2: " << test2 << '\n';
        std::cout << "test3: " << test3 << '\n';
        std::cout << "test4: " << test4 << '\n';
    }

};

int main()


{
    Course_Student s1("2002110", 22, 2, 1, 19, 20, 18, 15);

 s1.print_basic();

  std::cout << "Best 3 sum: " << s1.best_3() << '\n';

    return 0;
}
