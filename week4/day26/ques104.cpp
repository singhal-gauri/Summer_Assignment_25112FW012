#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "1. What is the result of (10%2) operation?\n";
    cout << "1. 5\n2. 0\n3. 10\n4. Not define\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. Python\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. Which is not a relational operator?\n";
    cout << "1. ==\n2. =\n3. !=\n4. <=\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 4
    cout << "\n4. Which data type is used to store decimal numbers?\n";
    cout << "1. int\n2. char\n3. bool\n4. float\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 4)
        score++;

    // Question 5
    cout << "\n5. Which keyword is used to define a class in C++?\n";
    cout << "1. class\n2. struct\n3. object\n4. public\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 1)
        score++;

    cout << "\n===== RESULT =====\n";
    cout <<"Your Score: "<<score<< " out of 5\n";

    if (score == 5)
        cout << "Excellent!";
    else if (score >= 3)
        cout << "Good Job!";
    else
        cout << "Keep Practicing!";

    return 0;
}