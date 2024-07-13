#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;

    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Operator for sorting by age
    bool operator<(const Person& other) const {
        return age < other.age;
    }
};

int main() {
    std::vector<Person> people;

    // Populate the vector with some people
    people.push_back(Person("Alice", 25));
    people.push_back(Person("Bob", 30));
    people.push_back(Person("Charlie", 22));

    // Sort the vector of people by age using std::sort
    std::sort(people.begin(), people.end());

    // Print the sorted list
    for (const Person& person : people) {
        std::cout << person.name << " (" << person.age << " years old)" << std::endl;
    }

    return 0;
}
