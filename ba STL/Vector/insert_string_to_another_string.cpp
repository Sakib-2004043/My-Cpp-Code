#include <iostream>
#include <string>

int main() {
    std::string originalString = "This is a sentence.";
    std::string stringToInsert = "inserted ";

    // Define the position here you want to insert the string
    int positionToInsert = 8;  // Index at which you want to insert the new string

    // Insert the new string into the original string
    originalString.insert(positionToInsert, stringToInsert);

    // Output the modified string
    std::cout << originalString << std::endl;

    return 0;
}
