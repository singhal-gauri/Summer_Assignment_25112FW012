#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

bool hasUppercase(string password)
{
    for(int i = 0; i < password.length(); i++)
    {
        if(password[i] >= 'A' && password[i] <= 'Z')
            return true;
    }
    return false;
}

bool hasLowercase(string password)
{
    for(int i = 0; i < password.length(); i++)
    {
        if(password[i] >= 'a' && password[i] <= 'z')
            return true;
    }
    return false;
}

bool hasDigit(string password)
{
    for(int i = 0; i < password.length(); i++)
    {
        if(password[i] >= '0' && password[i] <= '9')
            return true;
    }
    return false;
}

bool hasSpecial(string password)
{
    char special[] = {'@','#','$','%','&','*','!'};

    for(int i = 0; i < password.length(); i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(password[i] == special[j])
                return true;
        }
    }
    return false;
}

void checkStrength(string password)
{
    int score = 0;

    if(password.length() >= 8)
        score++;

    if(hasUppercase(password))
        score++;

    if(hasLowercase(password))
        score++;

    if(hasDigit(password))
        score++;

    if(hasSpecial(password))
        score++;

    cout << "\nPassword Analysis\n";

    cout << "Length: " << password.length() << endl;

    cout << "Uppercase: ";
    if(hasUppercase(password))
        cout << "Yes\n";
    else
        cout << "No\n";

    cout << "Lowercase: ";
    if(hasLowercase(password))
        cout << "Yes\n";
    else
        cout << "No\n";

    cout << "Digit: ";
    if(hasDigit(password))
        cout << "Yes\n";
    else
        cout << "No\n";

    cout << "Special Character: ";
    if(hasSpecial(password))
        cout << "Yes\n";
    else
        cout << "No\n";

    cout << "\nPassword Strength: ";

    if(score <= 2)
        cout << "Weak";
    else if(score <= 4)
        cout << "Medium";
    else
        cout << "Strong";

    cout << endl;
}

void showSuggestions(string password)
{
    cout << "\nSuggestions:\n";

    if(password.length() < 8)
        cout << "- Increase length to at least 8 characters\n";

    if(!hasUppercase(password))
        cout << "- Add uppercase letters\n";

    if(!hasLowercase(password))
        cout << "- Add lowercase letters\n";

    if(!hasDigit(password))
        cout << "- Add numbers\n";

    if(!hasSpecial(password))
        cout << "- Add special characters\n";
}

void generatePassword()
{
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char digits[] = "0123456789";
    char special[] = "@#$%&*!";

    string password = "";

    password += upper[rand() % 26];
    password += lower[rand() % 26];
    password += digits[rand() % 10];
    password += special[rand() % 7];

    string all =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789"
    "@#$%&*!";

    for(int i = 0; i < 6; i++)
    {
        password += all[rand() % all.length()];
    }

    cout << "\nGenerated Strong Password: "
         << password << endl;
}

int main()
{
    srand(time(0));

    int choice;

    do
    {
        cout << "\n===== PASSWORD STRENGTH CHECKER =====\n";
        cout << "1. Check Password\n";
        cout << "2. Generate Strong Password\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            string password;

            cout << "Enter Password: ";
            cin >> password;

            checkStrength(password);
            showSuggestions(password);
        }
        else if(choice == 2)
        {
            generatePassword();
        }
        else if(choice == 3)
        {
            cout << "Thank You!\n";
        }
        else
        {
            cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}