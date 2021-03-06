#include <iostream>

using namespace std;

// created a data structure for students
struct student{
    int studentNumber;
    string id;
    string name;
    int age;
    string gender;
    int score;
    char grade;
}s[5];


int main()
{
    cout <<"Enter information of students: " << endl;
    // variables to calculate total number of males and females
    int maleCount = 0;
    int femaleCount = 0;

    //storing information
    //using a for loop to store information for five different people
    for(int i = 0; i < 5; ++i)
    {
    s[i].studentNumber = i + 1;
    cout << "For student number: " << s[i].studentNumber << "," << endl;
    cout << "Enter ID-Number: ";
    cin >> s[i].id;

    cout << "\nEnter First Name: ";
    cin >> s[i].name;

    cout << "\nEnter Age: ";
    cin >> s[i].age;

    cout << "\nEnter Gender (Type in Either M or F): ";
    cin >> s[i].gender;

    // if condition to accumulate to number of males
    if(s[i].gender == "M"){
    maleCount++;

    }
    // if else condition to accumulate to number of females
    else if(s[i].gender == "F"){
    femaleCount++;

    }
    cout << "\nEnter Score: ";
    cin >> s[i].score;

    // if condition to determine the grades.
    if(s[i].score <= 100 && s[i].score >=80 )
    {
        s[i].grade = 'A';
    }

    else if(s[i].score <= 79 && s[i].score >=70)
    {
      s[i].grade = 'B';
    }

        else if(s[i].score <= 69 && s[i].score >=60)
    {
        s[i].grade = 'C';
    }

        else if(s[i].score <= 59 && s[i].score >=50)
    {
        s[i].grade  ='D';
    }
        else if(s[i].score <= 49 && s[i].score >=40)
    {
        s[i].grade = 'E';
    }
        else if (s[i].score < 40)
    {
        s[i].grade = 'F';

        cout << endl << endl << endl;
    }


    cout << endl << endl << endl;
}

    cout << "\n\n\n\n\nStudents Information: " << endl;

    //Displaying information
    for(int i = 0; i < 5; ++i)
    {

        cout << "\nStudent number: " << i+1 << endl;
        cout << "Student ID-Number: " << s[i].id << endl;
        cout << "Student Name: " << s[i].name << endl;
        cout << "Student Age: " << s[i].age << endl;
        cout << "Student Gender: " << s[i].gender << endl;
        cout << "Student Score: " << s[i].score << endl;
        cout << "Student Grade: " << s[i].grade << endl;


    }
    // Displaying averages and totals of specific variables
    cout <<"\n\n\n";
    cout << "Average Age = " << s[0].age+s[1].age+s[2].age+s[3].age+s[4].age/5<<endl<<endl;
    cout << "Average Score = "<<s[0].score+s[1].score+s[2].score+s[3].score+s[4].score/5<< endl<<endl;
    cout << "Male Count = "<<maleCount<< endl<<endl;
    cout << "Female Count  = "<<femaleCount<< endl<<endl;


    return 0;
}

