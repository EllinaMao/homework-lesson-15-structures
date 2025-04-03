#include "task 3.h"
#include <cstring>

void InitPerson(person& pr)
{
    GetName(pr);
    GetAge(pr);
    GetHeight(pr);
    GetWeight(pr);
    isMarried(pr);

}

void GetName(person& pr)
{
    cout << "Name(no more than 20 characters): " << endl;
    cin.getline(pr.name, pr.namesize);

    if (cin.fail())
    {   cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

}

void GetAge(person& pr)
{
    cout << "Age: " << endl;
    cin >> pr.age;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void GetHeight(person& pr)
{
    cout << "Height: " << endl;
    cin >> pr.height;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void GetWeight(person& pr)
{
    cout << "Weight: " << endl;
    cin >> pr.weight;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void isMarried(person& pr)
{
    int temp = -1;
    while (temp != 1 && temp != 2) {

        cout << "Enter 1 if not married or 2 if married: " << endl;
        cin >> temp;
        if (temp == 1) {
            pr.married = true;
        }
        else if (temp == 2) {
            pr.married = false;
        }
        else {
            cout << "Wrong answer, try again" << endl;
        }
    }
}

void PrintObject(person& pr)
{
    cout << pr.name << endl;
    cout << pr.age << endl;
    cout << pr.height << endl;
    cout << pr.weight << endl;

    if (pr.married) {
        cout << "married";
   }
    else {
        cout << "single";
    }
}



