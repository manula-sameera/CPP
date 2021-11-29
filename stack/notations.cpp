#include <iostream>
#include <stack>
#define MAX_CHAR 50

using namespace std;

stack<char> st;
char input[MAX_CHAR];
int count = 0;

void get_input()
{
    cout << "Enter calculation : ";
    cin.getline(input, MAX_CHAR);
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
}

void delete_and_push(int index)
{
    for (int i = index; i < count; i++)
    {
        input[i] = input[i + 1];
    }
    count--;
}

void reverse_arrey()
{
    char temp;

    for (int i = 0, j = count - 1; i < count / 2; i++, j--)
    {
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void you_wouldnt_get_it(int i)
{
    st.push(input[i - 1]);
    st.push(input[i + 1]);
    st.push(input[i]);
    delete_and_push(i + 1);
    delete_and_push(i);
    delete_and_push(i - 1);
}

void Infix_To_Prefix()
{
    // for (int i = 0; i < count; i++)
    // {
    int i = 0;
    i = 0;
    while (i < count)
    {
        switch (input[i])
        {
        case '/':
            you_wouldnt_get_it(i);
            i = 0;
            break;

        default:
            i++;
            break;
        }
    }

    i = 0;
    while (i < count)
    {
        switch (input[i])
        {

        case '*':
            you_wouldnt_get_it(i);
            i = 0;
            break;

        default:
            i++;
            break;
        }
    }

    i = 0;
    while (i < count)
    {
        switch (input[i])
        {

        case '+':
            you_wouldnt_get_it(i);
            i = 0;
            break;

        default:
            i++;
            break;
        }
    }

    i = 0;
    while (i < count)
    {
        switch (input[i])
        {

        case '-':
            you_wouldnt_get_it(i);
            i = 0;
            break;

        default:
            i++;
            break;
        }
    }
}

void print()
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        cout << input[i] << endl;
    }
    cout << endl;
}

void print_stack()
{

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    cout << endl;
}

int main()
{
    get_input();
    reverse_arrey();
    Infix_To_Prefix();
    print_stack();
}