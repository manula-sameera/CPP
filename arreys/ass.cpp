#include <iostream>
#define max_mid 40
#define max_final 60
#define STUDENT_COUNT 10
#define SUBJECT_COUNT 6

using namespace std;

int data[STUDENT_COUNT][SUBJECT_COUNT];

void main_menu();

void fill_random_data()
{

    for (size_t i = 0; i < STUDENT_COUNT; i++)
    {
        for (size_t j = 0; j < SUBJECT_COUNT; j++)
        {
            int marks =  rand() % max_mid+1 + rand() % max_final+1 + rand() % 6;
            //data[i][j] = rand() % max_mid+1 + rand() % max_final+1 + rand() % 6;
            if (marks>100)
            {
                j--;
            }else{
               data[i][j]=marks; 
            }
            
        }
    }
    cout << "Data added" << endl;
    main_menu();
}

void print_all_data()
{
    cout << "\t-----------------------------------------------" << endl;
    cout << "\t";
    for (size_t i = 0; i < SUBJECT_COUNT; i++)
    {
        cout << 500 + i << "\t";
    }
    cout << endl;
    cout << "\t-----------------------------------------------" << endl;

    for (size_t i = 0; i < STUDENT_COUNT; i++)
    {
        cout << "|" << 1000 + i << "|\t";
        for (size_t j = 0; j < SUBJECT_COUNT; j++)
        {
            if (data[i][j] == 0)
            {
                cout << "NULL"
                     << "\t";
            }
            else
            {
                cout << data[i][j] << "\t";
            }
        }
        cout << endl;
    }
    main_menu();
}

void print_totals()
{
    cout << "\tSelect Option :" << endl
         << "\t1: Print Total marks for all students" << endl
         << "\t2: Print Total marks for a given student" << endl
         << "\t3: Return to main menu" << endl
         << "\t choice : ";
    int selection;
    cin >> selection;

    switch (selection)
    {
    case 1:
        cout << "St Name|Total Marks" << endl;

        for (int i = 0; i < STUDENT_COUNT; i++)
        {
            cout << 1000 + i << "   |";
            int sum = 0;
            for (int j = 0; j < SUBJECT_COUNT; j++)
            {
                sum = sum + data[i][j];
            }
            cout << sum << endl;
        }
        print_totals();
        break;
    case 2:
        cout << "Enter student id : ";
        int sid;
        cin >> sid;
        if (sid >= 1000 and sid <= 1009)
        {
            int sum = 0;
            for (size_t i = 0; i < SUBJECT_COUNT; i++)
            {
                sum = sum + data[sid - 1000][i];
            }
            cout << "Total marks of student " << sid << " is " << sum << endl;
            print_totals();
        }
        else
        {
            cout << "Invalid sid" << endl;
            print_totals();
        }
    case 3:
        main_menu();
        break;
    default:
        cout << "Invalid input" << endl;
        print_totals();
        break;
    }
}

void highest_total_marks()
{
    int current_sum = 0;
    int id;
    for (int i = 0; i < STUDENT_COUNT; i++)
    {
        int sum = 0;
        for (int j = 0; j < SUBJECT_COUNT; j++)
        {
            sum = sum + data[i][j];
        }
        if (current_sum < sum)
        {
            current_sum = sum;
            id = i;
        }
    }
    cout << "Student ID of highest total marks : " << id + 1000 << endl;
    main_menu();
}

void avg_marks()
{
    cout << "Enter subject ID : ";
    int sid;
    cin >> sid;
    if (sid >= 500 and sid <= 505)
    {
        int tot = 0;
        for (int i = 0; i < STUDENT_COUNT; i++)
        {
            tot += data[i][sid - 500];
        }
        cout << "Avarage marks of sid " << sid << " is " << tot / 6.0 << endl;
        main_menu();
    }
    else
    {
        cout << "Invalid subject id" << endl;
        main_menu();
    }
}

void edit_data()
{
    cout << "Select student id to edit : ";
    int stid;
    cin >> stid;
    if (stid >= 1000 and stid <= 1009)
    {
        cout << "Enter subject id to edit : ";
        int sid;
        cin >> sid;
        if (sid >= 500 and sid <= 505)
        {
            cout << "Current marks is " << data[stid - 1000][sid - 500] << " enter new marks : ";
            int marks;
            cin >> marks;
            if (marks >= 0 and marks <= 100)
            {
                data[stid - 1000][sid - 500] = marks;
                cout << "Updated" << endl;
                main_menu();
            }
            else
            {
                cout << "Invalid marks" << endl;
                main_menu();
            }
        }
        else
        {
            cout << "Invalid subject id" << endl;
            main_menu();
        }
    }
    else
    {
        cout << "Invalid student id" << endl;
        main_menu();
    }
}

void reset_data()
{
    cout << "\t1: Reset marks for a given subject" << endl
         << "\t2: Reset marks for a given student" << endl
         << "\t3: Reset all marks" << endl
         << "select a option : ";
    int option;
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Enter subject id to delete data : ";
        int sid;
        cin >> sid;
        if (sid >= 500 and sid <= 505)
        {
            for (int i = 0; i < STUDENT_COUNT; i++)
            {
                data[i][sid - 500] = 0;
            }
            cout << "subject id " << sid << " marks for all students deleted" << endl;
            main_menu();
        }
        else
        {
            cout << "Invalid input";
            main_menu();
        }
    case 2:
        cout << "Select student id to delete data : ";
        int stid;
        cin >> stid;
        if (stid >= 1000 and stid <= 1009)
        {
            for (int i = 0; i < SUBJECT_COUNT; i++)
            {
                data[stid - 1000][i] = 0;
            }
            cout << "student id " << stid << " marks for all subjects deleted" << endl;
            main_menu();
        }
        else
        {
            cout << "Invalid input";
            main_menu();
        }
    case 3:
        for (int i = 0; i < STUDENT_COUNT; i++)
        {
            for (int j = 0; j < SUBJECT_COUNT; j++)
            {
                data[i][j] = 0;
            }
        }
        cout << "all data deleted" << endl;
        main_menu();

    default:
        cout << "Invalid input";
        main_menu();
    }
}

void main_menu()
{
    cout << "\nSelect Option:" << endl;
    cout << "0: exit" << endl
         << "1: fill random data" << endl
         << "2: print all data" << endl
         << "3: Print Totals" << endl
         << "4: Print student id who has height total marks in the class" << endl
         << "5: Print average marks for a given subject" << endl
         << "6: Edit marks for a given student for a given subject" << endl
         << "7: Reset Data" << endl
         << "select option :";
    int input;
    cin >> input;
    switch (input)
    {
    case 0:
        exit(0);
        break;
    case 1:
        fill_random_data();
        break;
    case 2:
        print_all_data();
        break;
    case 3:
        print_totals();
        break;
    case 4:
        highest_total_marks();
        break;
    case 5:
        avg_marks();
        break;
    case 6:
        edit_data();
        break;
    case 7:
        reset_data();
        break;
    default:
        cout << "Invalid input" << endl;
        main_menu();
        break;
    }
}

int main()
{
    main_menu();
    return 0;
}
