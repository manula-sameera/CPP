/**
 * @author M4nula 54meer4
 * @email manula.nxt2@gmail.com
 * @create date 2022-03-24 18:48:32
 * @modify date 2022-03-24 18:48:32

// Copyright 2022 M4nula 54meer4
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
 */
#include <iostream>

using namespace std;



class metrice
{
private:
    int m1[5][5];

public:
    // default constructor
    metrice()
    {
        // int i, j;
        // cout << "Enter the elements of matrix" << endl;
        // for (i = 0; i < 5; i++)
        // {
        //     for (j = 0; j < 5; j++)
        //     {
        //         cin >> m1[i][j];
        //     }
        // }
    }

    // overloaded constructor
    metrice(int arr[5][5])
    {
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                m1[i][j] = arr[i][j];
            }
        }
    }

    // copy constructor
    metrice(const metrice &obj)
    {
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                m1[i][j] = obj.m1[i][j];
            }
        }
    }

    // print function
    void print()
    {
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                cout << m1[i][j] << " ";
            }
            cout << endl;
        }
    }

    // overloaded assignment operator
    metrice operator=(const metrice &obj)
    {
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                m1[i][j] = obj.m1[i][j];
            }
        }
        return *this;
    }

    // overloaded + operator
    metrice operator+(const metrice &obj)
    {
        int i, j;
        metrice temp;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                temp.m1[i][j] = m1[i][j] + obj.m1[i][j];
            }
        }
        return temp;
    }

    // overloaded - operator
    metrice operator-(const metrice &obj)
    {
        int i, j;
        metrice temp;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                temp.m1[i][j] = m1[i][j] - obj.m1[i][j];
            }
        }
        return temp;
    }

    // overloaded / operator
    metrice operator/(const metrice &obj)
    {
        int i, j;
        metrice temp;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                temp.m1[i][j] = m1[i][j] / obj.m1[i][j];
            }
        }
        return temp;
    }

    // overloaded * operator
    metrice operator*(const metrice &obj)
    {
        int i, j, k;
        metrice temp;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                temp.m1[i][j] = 0;
                for (k = 0; k < 5; k++)
                {
                    temp.m1[i][j] += m1[i][k] * obj.m1[k][j];
                }
            }
        }
        return temp;
    }

    // overloaded ^ operator
    metrice operator^(const metrice &obj)
    {
        int i, j, k;
        metrice temp;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                temp.m1[i][j] = 0;
                for (k = 0; k < 5; k++)
                {
                    temp.m1[i][j] += m1[i][k] * obj.m1[k][j];
                }
            }
        }
        return temp;
    }

    // overloaded == operator
    bool operator==(const metrice &obj)
    {
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (m1[i][j] != obj.m1[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }

    // overloaded != operator
    bool operator!=(const metrice &obj)
    {
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (m1[i][j] != obj.m1[i][j])
                {
                    return true;
                }
            }
        }
        return false;
    }

    // destructor
    ~metrice()
    {
        // delete m1;
        cout << "Destructor called" << endl;
    }

    // overloaded () operator
    int operator()(int i, int j)
    {
        return m1[i][j];
    }

    // overloaded () operator
    int operator()(int i)
    {
        return m1[i][i];
    }

    // garbage collector
    void gc()
    {
        delete m1;
        cout << "Garbage collector called" << endl;
    }
};

int main()
{

    // create metrice object

    int values[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    metrice m1(values);
    m1.print();
    cout << "------------------m2-------------------" << endl;
    metrice m2(m1);
    m2.print();
    cout << "------------------m3-------------------" << endl;
    metrice m3;
    m3 = m1;
    m3.print();
    cout << "------------------m4=m1+m2-------------------" << endl;
    metrice m4 = m1 + m2;
    m4.print();
    cout << "-------------------m5=m1-m2------------------" << endl;
    metrice m5 = m1 - m2;
    m5.print();
    cout << "-------------------m6=m1*m2-----------------" << endl;
    metrice m6 = m1 * m2;
    m6.print();
    cout << "--------------print m1[0][1]-----------------------" << endl;
    cout << m1(0, 1) << endl;
    cout << "--------------print m1[0][0]-----------------------" << endl;
    cout << m1(0) << endl;
    bool a = m1 == m2;
    cout << "m5 == m6 : " << a << endl;
    bool b = m1 != m2;
    cout << "m5 != m6 : " << b << endl;
    cout << "--------------garbage collection-----------------------" << endl;
    m1.gc();
    m2.gc();
    m3.gc();
    m4.gc();
    m5.gc();
    m6.gc();

    return 0;
}